//
//  ProjectEuler006.cpp
//  ProjectEuler
//
//  Created by Joel Viegas Oliveira on 06/10/14.
//  Copyright (c) 2014 MathDeveloper. All rights reserved.
//

#include "ProjectEuler006.h"
#include "Sums.h"

uint64_t ProjectEuler006::getSolution(){
    uint64_t solution = 0;
    uint64_t sumN = Sums::sumN(100);
    
    solution = sumN * sumN - Sums::sumOfSquaresN(100);
    
    return solution;
}
