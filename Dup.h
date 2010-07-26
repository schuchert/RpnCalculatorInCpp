#pragma once
#ifndef DUP_H_
#define DUP_H_

#include "Operator.h"

class Dup: public Operator {
public:
	Dup();
	virtual ~Dup();
	void invoke(RpnStack &values);
};

#endif
