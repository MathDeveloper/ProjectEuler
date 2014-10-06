//
//  Fibonacci.h
//  ProjectEuler
//
//  Created by Joel Viegas Oliveira on 06/10/14.
//  Copyright (c) 2014 MathDeveloper. All rights reserved.
//

#ifndef __ProjectEuler__Fibonacci__
#define __ProjectEuler__Fibonacci__

#include <stdio.h>
#include <vector>

using namespace std;

class Fibonacci{
public:
    Fibonacci();
    ~Fibonacci();
    
    vector<uint64_t> getN(int n);
    vector<uint64_t> getLower(uint64_t max);
    unsigned long getSize();
    
private:
    vector<uint64_t> numbersFibonacci;
    
};

#endif /* defined(__ProjectEuler__Fibonacci__) */
