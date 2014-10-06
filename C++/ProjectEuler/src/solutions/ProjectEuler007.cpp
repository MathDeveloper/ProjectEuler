//
//  ProjectEuler007.cpp
//  ProjectEuler
//
//  Created by Joel Viegas Oliveira on 06/10/14.
//  Copyright (c) 2014 MathDeveloper. All rights reserved.
//

#include "ProjectEuler007.h"
#include "Prime.h"

uint64_t ProjectEuler007::getSolution(){
    Prime p = Prime::Prime();
    vector<uint64_t> primes = p.getN(10001);
    uint64_t solution = *(primes.end()-1);

    
    return solution;
}