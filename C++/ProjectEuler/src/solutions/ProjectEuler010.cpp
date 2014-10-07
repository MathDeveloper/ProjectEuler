//
//  ProjectEuler010.cpp
//  ProjectEuler
//
//  Created by Joel Viegas Oliveira on 07/10/14.
//  Copyright (c) 2014 MathDeveloper. All rights reserved.
//

#include "ProjectEuler010.h"
#include "Prime.h"

uint64_t ProjectEuler010::getSolution(){
    uint64_t solution = 0;
    
    Prime p = Prime::Prime();
    vector<uint64_t> primes = p.getLower(2000000);
    
    for (vector<uint64_t>::iterator it = primes.begin(); it != primes.end(); it++) {
        solution += *it;
    }
    

    
    
    return solution;
}