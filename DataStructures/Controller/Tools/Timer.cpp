//
//  Timer.cpp
//  TimerProject
//
//  Created by Segota, Sheradon on 2/1/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#include "Timer.hpp"
using namespace std;

Timer :: Timer()
{
    executionTime = 0;
}

void Timer :: resetTimer()
{
    executionTime = 0;
}

void Timer :: startTimer()
{
    executionTime = clock();
}

void Timer :: stopTimer()
{
    assert(executionTime > 0);
    executionTime = clock() - executionTime;
}

void Timer :: displayInformation()
{
    cout << "execution time is " << executionTime << endl;
    cout << "not right time " << double (executionTime)/CLOCKS_PER_SEC << " seconds" << endl;
}

long Timer :: getTimeInMicroseconds()
{
    return executionTime;
}


