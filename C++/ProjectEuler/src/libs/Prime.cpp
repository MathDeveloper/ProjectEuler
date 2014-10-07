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
	num = 1;
    positive = -1;
}


Prime::~Prime()
{
}

unsigned long Prime::getSize(){
	return Primes.size();
}


vector<uint64_t> Prime::getN(unsigned long n){
	long size = getSize();
	if (size >= n){
		vector<uint64_t>::const_iterator first = Primes.begin();
		vector<uint64_t>::const_iterator last = Primes.begin() + n;
		vector<uint64_t> newVec(first, last);
		return newVec;
	}
    
    int k1 = 6*num-1;
    int k2 = 6*num+1;

	while (size < n)
	{
		long newSize = size + 1;
		while (size < newSize){
			bool isPrime=true;
            for (std::vector<uint64_t>::iterator it = Primes.begin()+2; it != Primes.end() && isPrime; ++it){
                isPrime = (k1 % (*it) != 0);
                if (isPrime && (*it)*(*it) > k1 ) {
                    it = Primes.end()-1;
                }
            }
			if (isPrime){
				Primes.push_back(k1);
				size++;
			}
            isPrime=true;
            for (std::vector<uint64_t>::iterator it = Primes.begin()+2; it != Primes.end() && isPrime; ++it){
                isPrime = (k2 % (*it) != 0);
                if (isPrime && (*it)*(*it) > k2 ) {
                    it = Primes.end()-1;
                }
            }
            if (isPrime){
                Primes.push_back(k2);
                size++;
            }
            
			num++;
            k1 = 6*num-1;
            k2 = 6*num+1;
		}
	}
    if (size == n) {
        return Primes;
    }
    else
        return getN(n);
}

vector<uint64_t> Prime::getLower(uint64_t max){
    vector<bool> siev(max,true);
    siev[0] = false;

    for(uint64_t i=1;i*i<max;i++ ){
        if (siev[i]){
            uint64_t product = (i+1)*(i+1);
            while (product < max) {
                siev[product-1]=false;
                product += (i+1);
            }
        }
    }

    uint64_t lastPrime = *Primes.end();
    
    for(uint64_t i=lastPrime;i<max;i++ ){
        if (siev[i] == true) {
            Primes.push_back(i+1);
        }
    }
    
	long size = getSize();

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
    return fact;

}


uint64_t Prime::mdc(uint64_t a, uint64_t b){
	if (a < b)
		return mdc(b, a);
	uint64_t resto = a % b;
	if (resto == 0)
		return b;
	else
		return mdc(b, resto);

}

uint64_t Prime::mmc(uint64_t a, uint64_t b){
	return a*b / mdc(a,b);
}
