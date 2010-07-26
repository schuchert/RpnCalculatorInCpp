#pragma once
#ifndef SUBTRACT_H_
#define SUBTRACT_H_

#include "BinaryOperator.h"

class Subtract : public BinaryOperator {
public:
	Subtract();
	virtual ~Subtract();

	int doBinaryOperator(int lhs, int rhs);

private:
	Subtract(const Subtract&);
	Subtract& operator=(const Subtract&);
};

#endif
