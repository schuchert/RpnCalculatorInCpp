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
	spOp &getOp() { return op; }

private:
	spOp op;
};

#endif
