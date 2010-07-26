#include "RpnCalculator.h"
#include "Operator.h"
#include "CompositeOperator.h"
#include "OperatorFactory.h"

RpnCalculator::RpnCalculator(OperatorFactory &factory)
	: factory(factory), currentProgram(0) {
}

RpnCalculator::~RpnCalculator() {
	delete currentProgram;
}

void RpnCalculator::createProgramNamed(const std::string &programName) {
	this->programName = programName;
	currentProgram = new CompositeOperator;
}

void RpnCalculator::addOperator(const std::string &operatorName) {
	currentProgram->append(factory.getOperatorNamed(operatorName));
}

void RpnCalculator::saveProgram() {
	factory.addOperator(programName, spOp(currentProgram));
	currentProgram = 0;
}

void RpnCalculator::enterNumber(int value) {
	values.push(value);
}

void RpnCalculator::executeOperator(std::string operatorName) {
	factory.getOperatorNamed(operatorName)->invoke(values);
}

int RpnCalculator::getX() const {
	return values.top();
}

v_string RpnCalculator::allOperatorNames() const {
	return factory.allOperatorNames();
}
