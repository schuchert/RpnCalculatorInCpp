#pragma once
#ifndef NOP_H_
#define NOP_H_

#include "Operator.h"

class Nop: public Operator {
public:
	Nop();
	virtual ~Nop();
	void invoke(RpnStack &values);
};

#endif
