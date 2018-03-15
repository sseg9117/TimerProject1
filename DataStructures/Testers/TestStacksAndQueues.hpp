//
//  TestStacksAndQueues.h
//  TimerProject
//
//  Created by Segota, Sheradon on 2/28/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#ifndef TestStacksAndQueues_hpp
#define TestStacksAndQueues_hpp
#include "../Controller/Tools/Timer.hpp"
#include "../Controller/FileController.hpp"
#include "../Model/Structures/Linear/List.hpp"
#include "../Model/Structures/Linear/Array.hpp"
#include "../Model/Structures/Linear/Queue.hpp"
#include "../Model/Structures/Linear/Stack.hpp"
#include "../Model/Structures/Linear/CircularList.hpp"

#include <iostream>

using namespace std;
class StacksAndQueuesTester
{
public:
    void stackVersusList();
    void stackVersusQueue();
    void queueVersusList();
};



#endif /* TestStacksAndQueues_hpp */
