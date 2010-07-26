#include "Sum.h"

#include "RpnStack.h"

Sum::Sum() {
}

Sum::~Sum() {
}

void Sum::invoke(RpnStack &values) {
	int result = 0;

	while(values.size() > 0) {
		result += values.top();
		values.pop();
	}

	values.push(result);
}
