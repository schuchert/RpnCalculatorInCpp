#pragma once
#ifndef BINARYOPERATOR_H_
#define BINARYOPERATOR_H_

#include "Operator.h"

class BinaryOperator: public Operator {
public:
	BinaryOperator();
	virtual ~BinaryOperator();

	void invoke(RpnStack &values);

	virtual int doBinaryOperator(int lhs, int rhs) = 0;
};

#endif
