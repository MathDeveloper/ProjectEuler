//
//  ProjectEuler001.cpp
//  ProjectEuler
//
//  Created by Joel Viegas Oliveira on 05/10/14.
//  Copyright (c) 2014 MathDeveloper. All rights reserved.
//

#include "ProjectEuler001.h"

uint64_t ProjectEuler001::getSolution(){
    uint64_t solution = 0;

    for (int i=0; i<1000; i++) {
        if (i%3 ==0 || i%5 ==0) {
            solution+=i;
        }
    }
    return solution;
}
