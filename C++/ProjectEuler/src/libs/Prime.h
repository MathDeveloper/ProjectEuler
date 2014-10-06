//
//  Prime.h
//  ProjectEuler
//
//  Created by Joel Viegas Oliveira on 06/10/14.
//  Copyright (c) 2014 MathDeveloper. All rights reserved.
//

#ifndef __ProjectEuler__Prime__
#define __ProjectEuler__Prime__

#include <stdio.h>
#include <stdint.h>
#include <vector>

using namespace std;

class Prime
{
public:
	Prime();
	~Prime();
	vector<uint64_t> getN(unsigned int n);
	vector<uint64_t> getLower(uint64_t max);
	vector<uint64_t> getFactorization(uint64_t num);
	unsigned long getSize();

	static uint64_t mdc(uint64_t a, uint64_t b);
	static uint64_t mmc(uint64_t a, uint64_t b);

private:
	vector<uint64_t> Primes;
	int num;
};

#endif /* defined(__ProjectEuler__Prime__) */