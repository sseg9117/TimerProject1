//
//  SortingTester.hpp
//  TimerProject
//
//  Created by Segota, Sheradon on 3/15/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#ifndef SortingTester_hpp
#define SortingTester_hpp

#include <iostream>
#include "../Controller/FileController.hpp"
#include "../Controller/Tools/Timer.hpp"


class SortingTester
{
private:
    void quickSort(vector<CrimeData> data, int low, int high);
    int partition(vector<CrimeData> data, int low, int high);
    void swap(vector<CrimeData> info, int small, int large );
public:
    void testSorts();
};

#endif /* SortingTester_hpp */
