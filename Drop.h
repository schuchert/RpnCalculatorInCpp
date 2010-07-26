#pragma once
#ifndef DROP_H_
#define DROP_H_

#include "Operator.h"

class Drop: public Operator {
public:
	Drop();
	virtual ~Drop();
	void invoke(RpnStack &values);
};

#endif
