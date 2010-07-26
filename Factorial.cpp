#include "Factorial.h"

#include "RpnStack.h"

Factorial::Factorial() {
}

Factorial::~Factorial() {
}

void Factorial::invoke(RpnStack &values) {
	int operand = values.top();
	values.pop();

	int result = 1;

	while(operand > 1)
		result *= operand--;

	values.push(result);
}
