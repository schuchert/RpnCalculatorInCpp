#pragma once
#ifndef IFELSE_H_
#define IFELSE_H_

#include "Operator.h"
#include "spOp.h"

class IfElse: public Operator {
public:
	IfElse(spOp ifOp, spOp elseOp);
	virtual ~IfElse();
	void invoke(RpnStack &values);

private:
	spOp ifOp;
	spOp elseOp;
};

#endif
