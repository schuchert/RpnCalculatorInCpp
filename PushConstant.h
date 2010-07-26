#pragma once
#ifndef PUSHCONSTANT_H_
#define PUSHCONSTANT_H_

#include "Operator.h"

class PushConstant: public Operator {
public:
	PushConstant(int value);
	virtual ~PushConstant();
	void invoke(RpnStack &values);

private:
	const int value;
};

#endif
