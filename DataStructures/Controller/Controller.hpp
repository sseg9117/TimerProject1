//
//  Controller.hpp
//  TimerProject
//
//  Created by Segota, Sheradon on 2/1/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp
#include "Tools/Timer.hpp"
#include "FileController.hpp"
#include "ArrayTester.hpp"
#include "LinkedListTester.hpp"
#include "TestStacksAndQueues.hpp"
#include "RecursionTester.hpp"
#include "SortingTester.hpp"
#include "../Model/Structures/Linear/Array.hpp"
#include "../Testers/ArrayTester.hpp"
#include "../Testers/LinkedListTester.hpp"
#include "../Testers/TestStacksAndQueues.hpp"
#include "../Testers/RecursionTester.hpp"



#include <iostream>
#include <vector>
#include "FileController.hpp"

class Controller
{
private:
    void testStacksAndQueues();
    void testArray();
    void findMaxAndMin();
public:
    void start();
};

#endif /* Controller_hpp */
