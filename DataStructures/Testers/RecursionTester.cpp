//
//  RecursionTester.cpp
//  TimerProject
//
//  Created by Segota, Sheradon on 3/5/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#include "RecursionTester.hpp"

int RecursionTester :: fib(int number)
{
    if ( number == 0 || number == 1 )
    {
        return 1;
    }
    else
    {
        cout << "calling fib with: " << number - 1 << " and " << number - 2 << endl;
        return fib (number - 1) + fib (number -2);
    }
}

string RecursionTester :: mystery(string word)
{
    return "";
    
}

void RecursionTester :: testRecursionNumbers()
{
    
}

void RecursionTester :: testRecursionString()
{
    
}
