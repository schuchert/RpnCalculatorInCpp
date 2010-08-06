#include "IfElse.h"
#include "If.h"
#include "RpnStack.h"

IfElse::IfElse() {
}

IfElse::IfElse(spOp ifOp, spOp elseOp) {
	If *candidate = dynamic_cast<If*>(ifOp.get());
	if(candidate) {
		resetFrom(*candidate);
	}
	else
		append(ifOp);

	elseBlock.append(elseOp);
}

IfElse::~IfElse() {
}

void IfElse::invoke(RpnStack &values) {
	int result = values.top();
	values.pop();
	if(result)
		CompositeOperator::invoke(values);
	else
		elseBlock.invoke(values);
}
