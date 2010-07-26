#pragma once
#ifndef OPERATOR_H_
#define OPERATOR_H_

class RpnStack;

class Operator {
public:
	virtual ~Operator() = 0;
	virtual void invoke(RpnStack &values) = 0;
};

#endif
