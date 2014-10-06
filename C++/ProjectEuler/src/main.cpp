//
//  main.cpp
//  ProjectEuler
//
//  Created by Joel Viegas Oliveira on 05/10/14.
//  Copyright (c) 2014 MathDeveloper. All rights reserved.
//

#include <iostream>
#include <time.h>

#include "ProjectEuler001.h"
#include "ProjectEuler002.h"
#include "ProjectEuler003.h"
#include "ProjectEuler004.h"
#include "ProjectEuler005.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    int problem;
    time_t begin, end;
    int seconds;
    bool moreQuestions = false;
    
    do{
        cout << "This is my solver to ProjectEuler! \nChoose question between 1 and 200:\t";
        cin >> problem;
        
        time(&begin);
        
        switch (problem) {
            case 1:
                cout << "Answer: " << ProjectEuler001::getSolution() << "\n";
                break;
                
            case 2:
                cout << "Answer: " << ProjectEuler002::getSolution() << "\n";
                break;

			case 3:
				cout << "Answer: " << ProjectEuler003::getSolution() << "\n";
				break;
                
            case 4:
                cout << "Answer: " << ProjectEuler004::getSolution() << "\n";
                break;
                
            case 5:
                cout << "Answer: " << ProjectEuler005::getSolution() << "\n";
                break;
                
            default:
                problem =0;
                cout << "We will soon have to answer this and other questions";
                
                break;
        }
        
        time(&end);
        seconds = difftime(end, begin);
        
        if (problem!=0) {
            cout << "Solved in " << seconds << " seconds.\n";
        }
        getchar();
        getchar();
        
        
        
    
    } while (moreQuestions);
    
    return 0;
}
