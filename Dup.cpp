#include "Dup.h"
#include "RpnStack.h"

Dup::Dup() {
}

Dup::~Dup() {
}

void Dup::invoke(RpnStack &values) {
	values.push(values.top());
}
