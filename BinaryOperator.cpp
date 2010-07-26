#include "BinaryOperator.h"

#include "RpnStack.h"

BinaryOperator::BinaryOperator() {
}

BinaryOperator::~BinaryOperator() {
}

void BinaryOperator::invoke(RpnStack &values) {
	int rhs = values.top();
	values.pop();
	int lhs = values.top();
	values.pop();
	int result = doBinaryOperator(lhs, rhs);
	values.push(result);
}
