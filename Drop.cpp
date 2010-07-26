#include "Drop.h"
#include "RpnStack.h"

Drop::Drop() {
}

Drop::~Drop() {
}

void Drop::invoke(RpnStack &values) {
	values.pop();
}
