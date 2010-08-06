#pragma once
#ifndef IF_H_
#define IF_H_

#include "CompositeOperator.h"

class If: public CompositeOperator {
public:
	If();
	If(spOp op);
	virtual ~If();
	void invoke(RpnStack &values);
};

#endif
