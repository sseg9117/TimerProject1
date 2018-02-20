//
//  LinearNode.hpp
//  TimerProject
//
//  Created by Segota, Sheradon on 2/6/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#include "Node.hpp"
#ifndef LinearNode_hpp
#define LinearNode_hpp
template <class Type>
class LinearNode : public Node<Type>
{
private:

protected:
    LinearNode<Type> * next;
public:
    //Constuctors
    LinearNode();
    LinearNode(Type data);
    LinearNode (Type data, LinearNode<Type> * next);
    //Methods
    void setNextNode(LinearNode<Type> * next);
    LinearNode<Type> * getNextNode();
};
//Constructors

/**
 this constuctor is used for building the raw stucture before values are known.
 */
template <class Type>
LinearNode<Type> :: LinearNode() : Node<Type>()
{
    this->next=nullptr;
}

/**
 This constuctor is used to create a reference to a instand with data.
 */
template <class Type>
LinearNode<Type> :: LinearNode(Type data) : Node<Type>(data)
{
    this->next = nullptr;
}

/**
 This constructor is used to create a reference to a instance with data and a known link.
 */
template <class Type>
LinearNode<Type> :: LinearNode(Type data, LinearNode<Type> * next) : Node<Type>(data)
{
    this->next = next;
}
//Accessor methods

template <class Type>
void LinearNode<Type> :: setNextNode(LinearNode<Type> * nextNodePointer)
{
    this->next = nextNodePointer;
}

template <class Type>
LinearNode<Type> * LinearNode<Type> :: getNextNode()
{
    return next;
}

#endif /* LinearNode_hpp */
