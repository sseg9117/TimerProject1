//
//  TestStacksAndQueues.h
//  TimerProject
//
//  Created by Segota, Sheradon on 2/28/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#ifndef TestingStacksAndQueues_hpp
#define TestingStacksAndQueues_hpp
#include <iostream>
#include "../Controller/Tools/Timer.hpp"
#include "../Controller/FileController.hpp"
#include "../Model/Structures/Linear/Stack.hpp"
#include "../Model/Structures/Linear/Queue.hpp"
#include "../Model/Structures/Linear/List.hpp"

using namespace std;

class TestStacksAndQueues
{
public:
    void stackVersusList();
    void stackVersusQueue();
    void queueVersusList();
    
    
};

#endif /* TestingStacksAndQueues_hpp */
