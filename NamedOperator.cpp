#include "NamedOperator.h"

NamedOperator::NamedOperator(std::string name, spOp op) : name(name), op(op) {
}

NamedOperator::~NamedOperator() {
}

void NamedOperator::invoke(RpnStack &values) {
	op->invoke(values);
}
