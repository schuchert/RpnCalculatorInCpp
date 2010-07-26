#pragma once
#ifndef SUM_H_
#define SUM_H_

#include "Operator.h"

class Sum : public Operator {
public:
	Sum();
	virtual ~Sum();

	void invoke(RpnStack &values);
};

#endif
