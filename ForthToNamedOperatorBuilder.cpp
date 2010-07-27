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


NamedOperator ForthToNamedOperatorBuilder::parse(const std::string &expression) {
	WhitespaceTokenizer tokenizer;
	WhitespaceTokenizer::vector values = tokenizer.split(expression);

	CompositeOperator *cOp = new CompositeOperator;

	for(unsigned int i = 2; i < values.size() && values[i] != ";"; ++i)
		try {
			cOp->append(factory.getOperatorNamed(values[i]));
		} catch(OperatorNotFoundException &e) {
			cOp->append(spOp(new PushConstant(atoi(values[i].c_str()))));
		}

	return NamedOperator(values[1], spOp(cOp));
}
