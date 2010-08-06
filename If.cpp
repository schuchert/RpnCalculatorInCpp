#include "If.h"
#include "RpnStack.h"

If::If() {
}

If::If(spOp op) {
	append(op);
}

If::~If() {
}

void If::invoke(RpnStack &values) {
	int result = values.top();
	values.pop();
	if(result)
		CompositeOperator::invoke(values);
}
