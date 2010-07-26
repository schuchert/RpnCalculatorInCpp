#include "OperatorFactory.h"
#include "OperatorNotFoundException.h"
#include "OperatorNameAlreadyRegisteredException.h"

#include "Add.h"
#include "Factorial.h"
#include "Subtract.h"
#include "Divide.h"
#include "Multiply.h"
#include "PrimeFactors.h"
#include "Sum.h"
#include "Drop.h"
#include "Dup.h"
#include "NDup.h"
#include "LessThen.h"
#include "GreaterThen.h"
#include "If.h"
#include "IfElse.h"
#include "Nop.h"
#include "Swap.h"

OperatorFactory::OperatorFactory() {
	addOperator("+", spOp(new Add));
	addOperator("-", spOp(new Subtract));
	addOperator("!", spOp(new Factorial));
	addOperator("*", spOp(new Multiply));
	addOperator("/", spOp(new Divide));
	addOperator("<", spOp(new LessThen));
	addOperator(">", spOp(new GreaterThen));
	addOperator("primeFactors", spOp(new PrimeFactors));
	addOperator("sum", spOp(new Sum));
	addOperator("drop", spOp(new Drop));
	addOperator("dup", spOp(new Dup));
	addOperator("ndup", spOp(new NDup));
	addOperator("nop", spOp(new Nop));
	addOperator("swap", spOp(new Swap));
	addOperator("if", spOp(new If(getOperatorNamed("nop"))));
	addOperator("ifElse", spOp(new IfElse(getOperatorNamed("nop"), getOperatorNamed("nop"))));

}

OperatorFactory::~OperatorFactory() {
}

spOp&
OperatorFactory::getOperatorNamed(const std::string &operatorName) {
	mapType::iterator location = operatorsByName.find(operatorName);

	if(location != operatorsByName.end())
		return location->second;
	throw OperatorNotFoundException();
}

void OperatorFactory::addOperator(const std::string &name, spOp op) {
	if(operatorsByName.find(name) == operatorsByName.end())
		operatorsByName[name] = op;
	else
		throw OperatorNameAlreadyRegisteredException();
}

v_string OperatorFactory::allOperatorNames() const {
	v_string result;

	for(mapType::const_iterator iter = operatorsByName.begin(); iter != operatorsByName.end(); ++iter)
		result.push_back((*iter).first);

	return result;
}
