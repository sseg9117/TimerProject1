//
//  FileController.hpp
//  TimerProject
//
//  Created by Segota, Sheradon on 2/2/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Data/CrimeData.hpp"
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>


using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    
};

#endif /* FileController_hpp */
