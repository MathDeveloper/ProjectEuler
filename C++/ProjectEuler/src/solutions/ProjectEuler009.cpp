//
//  ProjectEuler009.cpp
//  ProjectEuler
//
//  Created by Joel Viegas Oliveira on 07/10/14.
//  Copyright (c) 2014 MathDeveloper. All rights reserved.
//

#include "ProjectEuler009.h"
#include "Triplet.h"
#include "Prime.h"

uint64_t ProjectEuler009::getSolution(){
    uint64_t solution = 0;
    
    
    for (int m=2; solution == 0; m++) {
        for (int n=1; n<m; n++) {
            if (Prime::mdc(m, n) == 1) {
                Triplet t = Triplet::getPythagorean(m, n);
                uint64_t sum = t.getSum();
                if (1000 % sum == 0) {
                    uint64_t div = 1000 / sum;
                    solution = t.getProduct()* div*div*div;
                }
            }
        }
    }
    
    return solution;
}