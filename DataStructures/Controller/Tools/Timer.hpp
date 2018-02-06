//
//  Timer.hpp
//  TimerProject
//
//  Created by Segota, Sheradon on 2/1/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp
#include <stdio.h>
#include <time.h>
#include <assert.h>
#include <iostream>

class Timer
{

private:
    clock_t executionTime;

public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayInformation();
    long getTimeInMicroseconds();
};

#endif /* Timer_hpp */
