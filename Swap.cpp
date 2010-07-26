#include "Swap.h"
#include "RpnStack.h"

Swap::Swap() {
}

Swap::~Swap() {
}

void Swap::invoke(RpnStack &values) {
	int oldTop = values.top();
	values.pop();
	int newTop = values.top();
	values.pop();

	values.push(oldTop);
	values.push(newTop);
}
