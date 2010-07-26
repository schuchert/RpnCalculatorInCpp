#include "RpnStack.h"

RpnStack::RpnStack() {
}

RpnStack::~RpnStack() {
}

void RpnStack::pop() {
	if(!empty())
		std::stack<int>::pop();
}

int RpnStack::top() const {
	if(!empty())
		return std::stack<int>::top();
	return 0;
}
