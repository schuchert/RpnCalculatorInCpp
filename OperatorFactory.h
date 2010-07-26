#pragma once
#ifndef OPERATORFACTORY_H_
#define OPERATORFACTORY_H_

#include "v_string.h"
class Operator;
#include "spOp.h"
#include <map>

class OperatorFactory {
public:
	typedef std::map<std::string, spOp> mapType;

	OperatorFactory();
	virtual ~OperatorFactory();

	spOp& getOperatorNamed(const std::string &operatorName);

	void addOperator(const std::string &name, spOp op);

	v_string allOperatorNames() const;

private:
	mapType operatorsByName;

private:
	OperatorFactory(const OperatorFactory&);
	OperatorFactory& operator=(const OperatorFactory&);
};

#endif
