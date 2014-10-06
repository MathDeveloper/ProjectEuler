//
//  Sums.cpp
//  ProjectEuler
//
//  Created by Joel Viegas Oliveira on 06/10/14.
//  Copyright (c) 2014 MathDeveloper. All rights reserved.
//

#include "Sums.h"

uint64_t Sums::sumN(int n){
    uint64_t sum = (1+n)*n/2;
    
    
    return sum;
}

uint64_t Sums::sumOfSquaresN(int n){
    uint64_t sum = n*(n+1)*(2*n+1)/6;
    
    return sum;
}