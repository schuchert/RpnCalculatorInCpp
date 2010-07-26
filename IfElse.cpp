#include "IfElse.h"
#include "If.h"
#include "RpnStack.h"

IfElse::	IfElse(spOp ifOp, spOp elseOp) : ifOp(ifOp), elseOp(elseOp) {
	If *candidate = dynamic_cast<If*>(ifOp.get());
	if(candidate)
		this->ifOp = candidate->getOp();
}

IfElse::~IfElse() {
}

void IfElse::invoke(RpnStack &values) {
	int result = values.top();
	values.pop();
	if(result)
		ifOp->invoke(values);
	else
		elseOp->invoke(values);
}
