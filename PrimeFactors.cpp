#include "PrimeFactors.h"
#include "RpnStack.h"

PrimeFactors::PrimeFactors() {
}

PrimeFactors::~PrimeFactors() {
}

void PrimeFactors::invoke(RpnStack &values) {
	int operand = values.top();
	values.pop();

	for (int divisor = 2; divisor <= operand; ++divisor)
		while (0 == (operand % divisor)) {
			values.push(divisor);
			operand /= divisor;
		}
}
