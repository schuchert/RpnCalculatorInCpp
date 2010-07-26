#pragma once
#ifndef PRIMEFACTORS_H_
#define PRIMEFACTORS_H_

#include "Operator.h"

class PrimeFactors: public Operator {
public:
	PrimeFactors();
	virtual ~PrimeFactors();

	void invoke(RpnStack &values);
};

#endif
