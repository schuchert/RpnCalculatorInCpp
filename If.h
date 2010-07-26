#pragma once
#ifndef IF_H_
#define IF_H_

#include "Operator.h"
#include "spOp.h"

class If: public Operator {
public:
	If(spOp op);
	virtual ~If();
	void invoke(RpnStack &values);

private:
	spOp op;
};

#endif
