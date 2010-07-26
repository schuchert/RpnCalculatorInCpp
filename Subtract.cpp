#include "Subtract.h"
#include "RpnStack.h"

Subtract::Subtract() {
}

Subtract::~Subtract() {
}

int Subtract::doBinaryOperator(int lhs, int rhs) {
	return lhs - rhs;
}
