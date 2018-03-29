//
//  Tree.hpp
//  TimerProject
//
//  Created by Segota, Sheradon on 3/27/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#ifndef Tree_h
#define Tree_h

#include "../../Nodes/BinaryTreeNode.hpp"
template <class Type>
class Tree
{
protected:
    BinaryTreeNode<Type> * root;
public:
    //Informational methods
    virtual int getSize() = 0;
    virtual int getHieght() =0;
    virtual bool isCOmplete() = 0;
    virtual bool isBalanced() = 0;
    //*datamethods*
    virtual void insert(Type data) = 0;
    virtual bool contains(Type data) = 0;
    virtual void remove(Type data) = 0;
    //*Traversals*
    virtual void inOrderTraversal() = 0;
    virtual void preOrderTraversal() = 0;
    virtual void postOrderTraversal() = 0;
    
};

#endif /* Tree_h */
