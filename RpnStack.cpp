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

#include <iostream>
std::ostream& operator<<(std::ostream& stream, const RpnStack &stack) {
	std::stack<int> copy = stack;
	while(copy.size() > 0) {
		stream << copy.top() << " ";
		copy.pop();
	}
	stream << std::endl;

	return stream;
}
