#pragma once
#ifndef MULTIPLY_H_
#define MULTIPLY_H_

#include "BinaryOperator.h"

class Multiply: public BinaryOperator {
public:
	Multiply();
	virtual ~Multiply();

	int doBinaryOperator(int lhs, int rhs);
};

#endif
