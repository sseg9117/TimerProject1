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
#include "../Data/CrimeData.hpp"

#include <iostream>
#include <vector>
#include "FileController.hpp"

class Controller
{
private:
    void findMaxAndMin();
public:
    void start();
};

#endif /* Controller_hpp */
