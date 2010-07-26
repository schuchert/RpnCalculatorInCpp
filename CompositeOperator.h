#pragma once
#ifndef COMPOSITEOPERATOR_H_
#define COMPOSITEOPERATOR_H_

#include "spOp.h"
#include "Operator.h"
#include <vector>

class CompositeOperator: public Operator {
public:
	typedef std::vector<spOp> vspOp;
	typedef vspOp::iterator iterator;

	CompositeOperator();
	virtual ~CompositeOperator();

	void invoke(RpnStack &values);
	void append(spOp op);

private:
	vspOp containedOperators;
};

#endif
