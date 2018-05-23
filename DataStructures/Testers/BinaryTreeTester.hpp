//
//  BinaryTreeTester.hpp
//  TimerProject
//
//  Created by Segota, Sheradon on 3/27/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include "../Model/Nodes/BinaryTreeNode.hpp"
#include "../Model/Structures/NonLinear/BinarySearchTree.hpp"
#include <iostream>

class BinaryTreeTester
{
private:
    BinarySearchTree<int> testTree;
    BinarySearchTree<int> wordTree;

    BinarySearchTree<int> testNode;
public:
    void doTreeStuff();
};

#endif /* BinaryTreeTester_hpp */
