#pragma once
#ifndef IFELSE_H_
#define IFELSE_H_

#include "CompositeOperator.h"
#include "spOp.h"

class IfElse: public CompositeOperator {
public:
	IfElse();
	IfElse(spOp ifOp, spOp elseOp);
	virtual ~IfElse();
	void invoke(RpnStack &values);
	CompositeOperator &getElseBlock() { return elseBlock; }

private:
	CompositeOperator elseBlock;
};

#endif
