#pragma once
#ifndef DIVIDE_H_
#define DIVIDE_H_

#include "BinaryOperator.h"

class Divide: public BinaryOperator {
public:
	Divide();
	virtual ~Divide();
	int doBinaryOperator(int lhs, int rhs);
};

#endif
