#pragma once
#ifndef GREATERTHEN_H_
#define GREATERTHEN_H_

#include "BinaryOperator.h"

class GreaterThen : public BinaryOperator {
public:
	GreaterThen();
	virtual ~GreaterThen();

	int doBinaryOperator(int lhs, int rhs);

private:
	GreaterThen(const GreaterThen&);
	GreaterThen& operator=(const GreaterThen&);
};

#endif
