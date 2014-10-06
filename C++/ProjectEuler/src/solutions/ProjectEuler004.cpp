//
//  ProjectEuler004.cpp
//  ProjectEuler
//
//  Created by Joel Viegas Oliveira on 06/10/14.
//  Copyright (c) 2014 MathDeveloper. All rights reserved.
//

#include "ProjectEuler004.h"
#include "Prime.h"

uint64_t ProjectEuler004::getSolution(){
    uint64_t solution=999999;
    
    int input =999;
    
    int val = input*input/1000;
    
    Prime p = Prime::Prime();
    
    for(int max = val; max>100; max--){
        solution = max/100 + 10*((max/10)%10) + 100*(max%10) + 1000*max;
        if (solution < input*input) {
            vector<uint64_t> primos = p.getFactorization(solution);
            
            if (*(primos.end()-1) < 999) {
                uint64_t a = *(primos.end()-1);
                uint64_t b = solution/a;
                int i =0;
                while (a<1000) {
                    if (b<1000) {
                        return solution;
                    }
                    a *= *(primos.begin()+i);
                    b = solution/a;
                    i++;
                }
                
                
                
            }
        }
        
    }
    
    
    return solution;
}