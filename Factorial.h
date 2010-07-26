#pragma once
#ifndef FACTORIAL_H_
#define FACTORIAL_H_

#include "Operator.h"

class Factorial : public Operator {
public:
	Factorial();
	virtual ~Factorial();

	void invoke(RpnStack &values);
};

#endif
