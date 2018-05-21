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
    
//    testTree.inOrderTraversal();
    testTree.preOrderTraversal();
//    testTree.postOrderTraversal();
    
    cout << testTree.isComplete() << endl;
    cout << testTree.isBalanced() << endl;
    cout << testTree.getHeight() << endl;
    BinarySearchTree<string> wordTree;
    wordTree.insert("Cake");
    wordTree.insert("Pizza");
    wordTree.insert("Chips");
    wordTree.insert("Somthing IDK");

    cout << wordTree.isBalanced() << endl;
    cout << wordTree.isComplete() << endl;
    cout << wordTree.getHeight() << endl;
}
