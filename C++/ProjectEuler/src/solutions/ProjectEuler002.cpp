//
//  ProjectEuler002.cpp
//  ProjectEuler
//
//  Created by Joel Viegas Oliveira on 06/10/14.
//  Copyright (c) 2014 MathDeveloper. All rights reserved.
//

#include "ProjectEuler002.h"
#include "Fibonacci.h"


uint64_t ProjectEuler002::getSolution(){
    Fibonacci f = Fibonacci::Fibonacci();
    
    vector<uint64_t> seqFib = f.getLower(4000000);
    
    uint64_t solution = 0;
    
    for (vector<uint64_t>::iterator it = seqFib.begin(); it!=seqFib.end(); it++) {
        if (*it % 2 == 0) {
            solution += *it;
        }
    }
    
    
    return solution;
    
}