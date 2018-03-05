//
//  RecursionTester.hpp
//  TimerProject
//
//  Created by Segota, Sheradon on 3/5/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#ifndef RecursionTester_hpp
#define RecursionTester_hpp

#include <iostream>
#include "../Controller/Tools/Timer.hpp"

using namespace std;
class RecursionTester
{
private:
    int fib(int start);
    string mystery(string word);
public:
    void testRecursionNumbers();
    void testRecursionString();
    
};

#endif /* RecursionTester_hpp */
