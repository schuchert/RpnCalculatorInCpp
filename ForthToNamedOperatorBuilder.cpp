#include "ForthToNamedOperatorBuilder.h"
#include "WhitespaceTokenizer.h"
#include "NamedOperator.h"
#include "CompositeOperator.h"
#include "OperatorFactory.h"
#include "PushConstant.h"
#include "OperatorNotFoundException.h"

#include <stdlib.h>

ForthToNamedOperatorBuilder::ForthToNamedOperatorBuilder(OperatorFactory &factory) : factory(factory) {

}

ForthToNamedOperatorBuilder::~ForthToNamedOperatorBuilder() {
}


#include "IfElse.h"
void ForthToNamedOperatorBuilder::handleIf(const std::string &token) {
	IfElse *newOperator = new IfElse;
	current()->append(spOp(newOperator));
	operators.push(newOperator);
}

void ForthToNamedOperatorBuilder::handleThen(const std::string &token) {
	operators.pop();
}

void ForthToNamedOperatorBuilder::handleElse(const std::string &token) {
	IfElse *top = dynamic_cast<IfElse*>(operators.top());
	operators.pop();
	operators.push(&top->getElseBlock());
}

void ForthToNamedOperatorBuilder::handleRemainder(const std::string &token) {
	try {
		current()->append(factory.getOperatorNamed(token));
	} catch(OperatorNotFoundException &e) {
		current()->append(spOp(new PushConstant(atoi(token.c_str()))));
	}
};

void ForthToNamedOperatorBuilder::processToken(const std::string &token) {
	if(token == "if")
		handleIf(token);
	else if(token == "then")
		handleThen(token);
	else if(token == "else")
		handleElse(token);
	else handleRemainder(token);
}

NamedOperator ForthToNamedOperatorBuilder::parse(const std::string &expression) {
	WhitespaceTokenizer tokenizer;
	WhitespaceTokenizer::vector values = tokenizer.split(expression);

	operators.push(new CompositeOperator);

	for(unsigned int i = 2; i < values.size() && values[i] != ";"; ++i)
		processToken(values[i]);

	CompositeOperator *cOp = operators.top();
	operators.pop();
	return NamedOperator(values[1], spOp(cOp));
}
