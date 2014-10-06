//
//  ProjectEuler005.cpp
//  ProjectEuler
//
//  Created by Joel Viegas Oliveira on 06/10/14.
//  Copyright (c) 2014 MathDeveloper. All rights reserved.
//

#include "ProjectEuler005.h"
#include "Prime.h"

uint64_t ProjectEuler005::getSolution(){
    uint64_t solution=1;
    
    int input = 20;
    for (int i=1; i<=input; i++) {
        solution = Prime::mmc(solution,i);
    }
    
    return solution;
}