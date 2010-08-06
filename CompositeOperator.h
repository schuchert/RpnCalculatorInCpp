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
	typedef vspOp::const_iterator const_iterator;

	CompositeOperator();
	virtual ~CompositeOperator();

	void invoke(RpnStack &values);
	void append(spOp op);

	void resetFrom(const CompositeOperator &op);

	const_iterator begin() const { return containedOperators.begin(); }
	const_iterator end() const { return containedOperators.end(); }
	vspOp::size_type size() const { return containedOperators.size(); }

protected:
	vspOp containedOperators;
};

#endif
