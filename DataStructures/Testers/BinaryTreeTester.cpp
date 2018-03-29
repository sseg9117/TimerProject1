//
//  BinaryTreeTester.cpp
//  TimerProject
//
//  Created by Segota, Sheradon on 3/27/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#include "BinaryTreeTester.hpp"

void BinaryTreeTester :: doTreeStuff()
{
    testTree.insert(3);
    testTree.insert(1);
    testTree.insert(2);
    testTree.insert(-324600);
    testTree.insert(-12);
    testTree.insert(7);
    testTree.insert(5);
    testTree.insert(6);
    testTree.insert(8);
    testTree.insert(5000);
    testTree.insert(9001);
    testTree.insert(10);
    testTree.insert(420);
    testTree.insert(600);
    
    testTree.inOrderTraversal();
}
