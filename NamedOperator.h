#pragma once
#ifndef NAMEDOPERATOR_H_
#define NAMEDOPERATOR_H_

#include <string>
#include "spOp.h"
#include "Operator.h"

class NamedOperator: public Operator {
public:
	NamedOperator(std::string name, spOp op);
	virtual ~NamedOperator();
	void invoke(RpnStack &values);
	const std::string& getName() const { return name; }

private:
	const std::string name;
	spOp op;
};

#endif
