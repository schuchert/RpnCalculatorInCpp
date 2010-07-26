#pragma once
#ifndef LESSTHEN_H_
#define LESSTHEN_H_

#include "BinaryOperator.h"

class LessThen : public BinaryOperator {
public:
	LessThen();
	virtual ~LessThen();

	int doBinaryOperator(int lhs, int rhs);

private:
	LessThen(const LessThen&);
	LessThen& operator=(const LessThen&);
};

#endif
