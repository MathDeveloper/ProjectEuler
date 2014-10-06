//
//  Fibonacci.cpp
//  ProjectEuler
//
//  Created by Joel Viegas Oliveira on 06/10/14.
//  Copyright (c) 2014 MathDeveloper. All rights reserved.
//

#include "Fibonacci.h"

Fibonacci::Fibonacci(){
    numbersFibonacci.push_back(1);
    numbersFibonacci.push_back(2);
}

Fibonacci::~Fibonacci(){
    
}

unsigned long Fibonacci::getSize(){
    return numbersFibonacci.size();
}

vector<uint64_t> Fibonacci::getN(int n){
    long  size = getSize();
    
    if (size >= n) {
        vector<uint64_t>::const_iterator first = numbersFibonacci.begin();
        vector<uint64_t>::const_iterator end = numbersFibonacci.begin() + n;
        vector<uint64_t>  newVec(first, end);
        return newVec;
    }
    
    while (size < n) {
        numbersFibonacci.push_back(numbersFibonacci[size-2] + numbersFibonacci[size-1]);
        size++;
    }
    
    return numbersFibonacci;
    
}

vector<uint64_t> Fibonacci::getLower(uint64_t max){
    long size = getSize();
    
    bool condition = true;
    
    uint64_t next = numbersFibonacci[size-2] + numbersFibonacci[size-1];
    
    if (numbersFibonacci[size-1] < max) {
        while (next < max) {
            numbersFibonacci.push_back(next);
            size++;
            next = numbersFibonacci[size-2] + numbersFibonacci[size-1];
        }
    } else {
        while (numbersFibonacci[size-1]) {
            size--;
        }
        vector<uint64_t>::const_iterator first = numbersFibonacci.begin();
        vector<uint64_t>::const_iterator end = numbersFibonacci.begin() + size;
        vector<uint64_t>  newVec(first, end);
        return newVec;
    }
    return numbersFibonacci;
}