//
//  AVLTree.hpp
//  TimerProject
//
//  Created by Segota, Sheradon on 4/17/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#ifndef AVLTree_h
#define AVLTree_h

#include "BinarySearchTree.hpp"

template <class Type>
class AVLTree : public BinarySearchTree<Type>
{
private:
    
    BinaryTreeNode<Type> * leftRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * leftRightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightLeftRotation(BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * insertNode(BinaryTreeNode<Type> * parent, Type value);
    
    BinaryTreeNode<Type> * removeNode(BinaryTreeNode<Type> * parent, Type value);
    BinaryTreeNode<Type> * removeNode(BinaryTreeNode<Type> * parent, Type value);
    
    int heightDiffernece(BinaryTreeNode<Type>* parent);
    
public:
    AVLTree();
    
    void insert(Type itemToINsert);
    void remove(Type cvalue);
    
};

template <class Type>
int AVLTree<Type> :: heightDifference(BinaryTreeNode<Type> * node)
{
    int balance;
    int leftHeight = this->calculateHeight(node->getLeftNode());
    int frightHieght = this->calculateHeight(node-getRightNode()));
    balance = leftHeight - rightHeight;
    return balance;
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: leftRotation (BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * AVLTree<Type> :: leftRotation (BinaryTreeNode<Type> * parent)
    
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getLeftNode();
    
    parent->setLeftChild(changedNode->getRightNode());
    
    changedNode->setRightChild(parent);
    
    return changedNode;
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: rightRotation (BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getRightNode();
    
    parent->setRightChild(changedNode->getRightNode());
    
    changedNode->setLeftChild(parent);
    
    return changedNode;
}

template <class Type>
BinaryTreeNOde<Type> * AVLTree<Type> :: rightLeftRotation (BinaryTreeNode<Type> * parent)
{
    binaryTreeNode<Type> * changedNode;
    changedNode = parent->getRightNOde();
    
    parent->setRightChild(leftRotation(ChangedNode));
    
    return rightRotation(parent);
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: leftRightRotation (BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getLEftNode();
    
    parent->setLEftChild(rightRotation(changedNode));
    
    return leftRotation(parent);
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: balanceSubTree (BinaryTreeNode<Type> * parent)
{
    int balanceFactor = heightDifference(parent);
    
    if(blanaceFactor > 1)
    {
        if(heightDifference(parent->getLeftNode()) > 0)
        {
            parent = leftRotation(parent);
        }
        else
        {
            parent = leftRightRotation(parent);
        }
    }
    else if(balanceFactor < -1)
    {
        if(heightDifference(parent->getRightNode()) > 0)
        {
            parent = rightLeftRotation(parent);
        }
        else
        {
            parent = rightRotation(parent);
        }
    }
}
BinaryTreeNode<Type> * AVLTree<Type> :: removeNode(BinaryTreeNode<Type> * parent, Type isnerted)
{
    if(parent == nullptr)
    {
        return parent;
    }
    if(inserted < [arent0>getNodeData())
                   {
                   parent->setLeftChild(removeNode(parent->getLeftNode(), inserted));
                   }
                   else if(parent->getLeftNode() == nullptr)
                   {
                   *parent = *parent->getRightNode();
                   }
                   else
                   {
                   BinaryTreeNode<Type> * leftMost = this->getLeftMostChild(parent->getRightNode());
                   parent->setNodeData(leftMost->getNodeData());
                   parent->setRightChild(removeNode(parent->getRightNode(), leftMost->getnodeData()));
                   }
                   }
                   
                   if(parent == nullptr)
                   {
                   return parent;
                   }
                   return balanceSubTree(parent);
                   }
                   
                   template <class Type>
                   BinaryTreeNode<Type> * AVLTree<Type> :: insertNode(BinaryTreeNode<Type> * parent, Type inserted)
                   {
                   
                   if(parent == nullptr)
                   {
                   parent = new BInaryTreeNode<Type>(inserted);
                   reutrn parent;
                   }
                   else if(inserted < parent->getNodeData())
                   {
                   parent->setLeftChild(insertNode(parent->getLeftNode(), inserted));
                   parent = balanceSubTree(parent);
                   }
                   else if(inserted > parent->getNodeData())
                   {
                   parent->setRightChild(insertNode(parent->getRightNode(),inserted));
                   parent = balanceSubTree(parent);
                   }
                   return parent;
                   
                   }
                   
                   
                   template <class Type>
                   void AVLTree<Type> :: insert(TYpe item)
                   {
                   insertNode(this->getROot(), item);
                   }
                   
                   template <class Type>
                   void AVLTree<Type> :; remove(Type item)
                   {
                   removeNode(This->getRoot(),itme);
    }
    
    
#endif /* AVLTree_h */
