#pragma once
#ifndef FORTHTONAMEDOPERATORBUILDER_H_
#define FORTHTONAMEDOPERATORBUILDER_H_

class NamedOperator;
#include <string>
#include <stack>
class OperatorFactory;
class CompositeOperator;

class ForthToNamedOperatorBuilder {
public:
	typedef std::stack<CompositeOperator*> Stack;

	ForthToNamedOperatorBuilder(OperatorFactory &factory);
	virtual ~ForthToNamedOperatorBuilder();
	NamedOperator parse(const std::string &expression);

private:
	CompositeOperator *current() { return operators.top(); }
	void processToken(const std::string &token);
	void handleIf(const std::string &token);
	void handleThen(const std::string &token);
	void handleElse(const std::string &token);
	void handleRemainder(const std::string &token);

private:
	Stack operators;
	OperatorFactory &factory;
};

#endif
