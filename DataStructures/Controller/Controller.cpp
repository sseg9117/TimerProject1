//
//  Controller.cpp
//  TimerProject
//
//  Created by Segota, Sheradon on 2/1/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#include "Controller.hpp"
#include "ArrayTester.hpp"
using namespace std;

void Controller :: start()
{
//    cout << "Testing the timeclass" << endl;
//    Timer codeTimer;
//    codeTimer.startTimer();
//    cout << "print something to the screen!" << endl;
//    codeTimer.stopTimer();
//    codeTimer.displayInformation();
//
//    codeTimer.resetTimer();
//
//    codeTimer.startTimer();∫
//    for(int i = 0; i < 216; i++)
//    {
//        cout << " index is at " << i << "\t";
//    }
//    codeTimer.stopTimer();
//    codeTimer.displayInformation();
    
    ArrayTester myTest;
    myTest.testArrayUse();
    myTest.testAdvancedArray();
    
}

void Controller :: findMaxAndMin()
{
    Timer searchTimer;
    searchTimer.startTimer();
    vector<CrimeData> myData = FileController::readCrimeDataToVector("/Users/sseg9117/Documents/Data Structures/TimerProject/DataStructures/Data/crime.csv");
    
    int minIndex = 0;
    int maxIndex = 0;
    
    for (int index = 1; index < myData.size(); index++)
    {
        if (myData [minIndex] < myData [index])
        {
            minIndex = index;
        }
        else if (myData [maxIndex] > myData[index])
        {
            maxIndex = index;
        }
    }
    searchTimer.stopTimer();
    cout << "The smallest Crime stat is at " << minIndex << " and it is: " << myData[minIndex] << endl;
    cout << "The largest Crime stat is at " << maxIndex << " and it is: "<< myData[maxIndex] << endl;
    searchTimer.displayInformation();
}
