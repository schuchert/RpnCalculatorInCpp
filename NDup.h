#pragma once
#ifndef NDUP_H_
#define NDUP_H_

#include "Operator.h"

class NDup: public Operator {
public:
	NDup();
	virtual ~NDup();
	void invoke(RpnStack &values);
};

#endif
