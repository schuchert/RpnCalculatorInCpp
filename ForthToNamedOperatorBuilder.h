#pragma once
#ifndef FORTHTONAMEDOPERATORBUILDER_H_
#define FORTHTONAMEDOPERATORBUILDER_H_

class NamedOperator;
#include <string>
class OperatorFactory;

class ForthToNamedOperatorBuilder {
public:
	ForthToNamedOperatorBuilder(OperatorFactory &factory);
	virtual ~ForthToNamedOperatorBuilder();
	NamedOperator parse(const std::string &expression);

private:
	OperatorFactory &factory;
};

#endif
