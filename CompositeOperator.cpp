#include "CompositeOperator.h"

CompositeOperator::CompositeOperator() {
}

CompositeOperator::~CompositeOperator() {
}

void CompositeOperator::invoke(RpnStack &values) {
	for(
		iterator iter = containedOperators.begin();
		iter != containedOperators.end();
		++iter)
		(*iter)->invoke(values);
}

void CompositeOperator::append(spOp op) {
	containedOperators.push_back(op);
}
