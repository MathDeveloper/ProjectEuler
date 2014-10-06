//
//  Prime.cpp
//  ProjectEuler
//
//  Created by Joel Viegas Oliveira on 06/10/14.
//  Copyright (c) 2014 MathDeveloper. All rights reserved.
//

#include "Prime.h"


Prime::Prime()
{
	Primes.push_back(2);
	Primes.push_back(3);
	num = 4;
}


Prime::~Prime()
{
}

unsigned long Prime::getSize(){
	int i = Primes.size();
	return i;
}


vector<uint64_t> Prime::getN(unsigned int n){
	long size = getSize();
	if (size >= n){
		vector<uint64_t>::const_iterator first = Primes.begin();
		vector<uint64_t>::const_iterator last = Primes.begin() + n;
		vector<uint64_t> newVec(first, last);
		return newVec;
	}

	while (size < n)
	{
		int newSize = size + 1;
		while (size != newSize){
			bool isPrime=true;
			for (std::vector<uint64_t>::iterator it = Primes.begin(); it != Primes.end() && isPrime; ++it)
				isPrime = (num % (*it) != 0);
			if (isPrime){
				Primes.push_back(num);
				size++;
			}
			num++;
		}
	}


	return Primes;
}

vector<uint64_t> Prime::getLower(uint64_t max){
	// TODO: use algorithm Euclides
	
	// burte 
	long size = getSize();

	bool condition = true;


	while  (Primes[size - 1] < max) {
		getN(size+1);
		size = getSize();
	}
	while (Primes[size - 1] > max) {
		size--;
	}
	vector<uint64_t>::const_iterator first = Primes.begin();
	vector<uint64_t>::const_iterator end = Primes.begin() + size;
	vector<uint64_t>  newVec(first, end);
	return newVec;
	
}

vector<uint64_t> Prime::getFactorization(uint64_t num){
	vector<uint64_t> fact;
	uint64_t copy = num;

	for (std::vector<uint64_t>::iterator it = Primes.begin(); it != Primes.end(); ++it){
		if (copy >= (*it * *it)){
			while (copy % (*it) == 0)
			{
				copy /= (*it);
				uint64_t ga = *it;
				fact.push_back(ga);
			}
			if (copy == 1)
				return fact;
			if (it == (Primes.end() - 1)){
				getN(getSize() + 1);
				it = Primes.begin();
			}

		}
		else{
			fact.push_back(copy);
			return fact;
		}

	}


}


uint64_t Prime::mdc(uint64_t a, uint64_t b){
	if (a < b)
		return mdc(b, a);
	int resto = a%b;
	if (resto == 0)
		return b;
	else
		return mdc(b, resto);

}

uint64_t Prime::mmc(uint64_t a, uint64_t b){
	return a*b / mdc(a,b);
}
