//
//  Triplet.h
//  ProjectEuler
//
//  Created by Joel Viegas Oliveira on 06/10/14.
//  Copyright (c) 2014 MathDeveloper. All rights reserved.
//

#ifndef __ProjectEuler__Triplet__
#define __ProjectEuler__Triplet__

#include <stdio.h>
#include <stdint.h>

class Triplet {
private:
    uint64_t a;
    uint64_t b;
    uint64_t c;
public:
    /*  get PythagoreanTriplet.
            m>n and mdc(m,n)==1 
        else 
            return (0,0,0) */
    static Triplet getPythagorean(uint64_t m, uint64_t n);
    uint64_t getSum();
    uint64_t getProduct();
};

#endif /* defined(__ProjectEuler__Triplet__) */
