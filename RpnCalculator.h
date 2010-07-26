#pragma once
#ifndef RPNCALCULATOR_H_
#define RPNCALCULATOR_H_

#include "v_string.h"
#include "RpnStack.h"
#include <memory>
class OperatorFactory;
class CompositeOperator;

class RpnCalculator {
public:
	RpnCalculator(OperatorFactory &factory);
	virtual ~RpnCalculator();

	void enterNumber(int value);
	void executeOperator(std::string operatorName);
	int getX() const;

	void createProgramNamed(const std::string &programName);
	void addOperator(const std::string &operatorName);
	void saveProgram();

	v_string allOperatorNames() const;

private:
	OperatorFactory &factory;
	RpnStack values;
	std::string programName;
	CompositeOperator *currentProgram;

private:
	RpnCalculator(const RpnCalculator&);
	RpnCalculator& operator=(const RpnCalculator&);
};

#endif
