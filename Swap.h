#pragma once
#ifndef SWAP_H_
#define SWAP_H_

#include "Operator.h"

class Swap: public Operator {
public:
	Swap();
	virtual ~Swap();
	void invoke(RpnStack &values);
};

#endif
