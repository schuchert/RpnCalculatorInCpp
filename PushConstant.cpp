#include "PushConstant.h"
#include "RpnStack.h"

PushConstant::PushConstant(int value) : value(value) {
}

PushConstant::~PushConstant() {
}

void PushConstant::invoke(RpnStack &values) {
	values.push(value);
}
