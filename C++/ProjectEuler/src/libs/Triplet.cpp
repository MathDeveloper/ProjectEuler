//
//  Triplet.cpp
//  ProjectEuler
//
//  Created by Joel Viegas Oliveira on 06/10/14.
//  Copyright (c) 2014 MathDeveloper. All rights reserved.
//

#include "Triplet.h"
#include "Prime.h"

Triplet Triplet::getPythagorean(uint64_t m, uint64_t n){
    Triplet t = Triplet();
    if ( m>n && Prime::mdc(m,n) == 1){
        t.a = m*m - n*n;
        t.b = 2*m*n;
        t.c = m*m + n*n;
    }
    else
        t.a = t.b = t.c = 0;
    
    return t;
}

uint64_t Triplet::getSum(){
    return a+b+c;
}

uint64_t Triplet::getProduct(){
    return a*b*c;
}