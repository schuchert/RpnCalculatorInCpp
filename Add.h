#pragma once
#ifndef ADD_H_
#define ADD_H_

#include "BinaryOperator.h"

class Add : public BinaryOperator {
public:
	Add();
	virtual ~Add();

	int doBinaryOperator(int lhs, int rhs);

private:
	Add(const Add&);
	Add& operator=(const Add&);
};

#endif
