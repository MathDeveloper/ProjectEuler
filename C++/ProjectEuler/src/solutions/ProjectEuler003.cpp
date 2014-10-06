//
//  ProjectEuler003.cpp
//  ProjectEuler
//
//  Created by Joel Viegas Oliveira on 06/10/14.
//  Copyright (c) 2014 MathDeveloper. All rights reserved.
//

#include "ProjectEuler003.h"
#include "Prime.h"


uint64_t ProjectEuler003::getSolution(){
	Prime p = Prime::Prime();

	vector<uint64_t> primos = p.getFactorization(600851475143);

	return *(primos.end() - 1);
    
}