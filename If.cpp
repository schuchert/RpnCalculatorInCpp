#include "If.h"
#include "RpnStack.h"

If::If(spOp op) : op(op) {
}

If::~If() {
}

void If::invoke(RpnStack &values) {
	int result = values.top();
	values.pop();
	if(result)
		op->invoke(values);
}
