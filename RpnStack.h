#pragma once
#ifndef RPNSTACK_H_
#define RPNSTACK_H_

#include <stack>

class RpnStack : public std::stack<int> {
public:
	RpnStack();
	virtual ~RpnStack();

	int top() const;
	void pop();

private:
	RpnStack(const RpnStack&);
	RpnStack& operator=(const RpnStack&);
};

#include <iosfwd>
std::ostream& operator<<(std::ostream& stream, const RpnStack &stack);

#endif
