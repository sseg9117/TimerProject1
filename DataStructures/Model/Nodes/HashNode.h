//
//  HashNode.h
//  TimerProject
//
//  Created by Segota, Sheradon on 5/1/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#ifndef HashNode_hpp
#define HashNode_hpp

#include "Node.hpp"
template <class Type>
class HashNode : public Node<Type>
{
private:
    long key;
public:
    HashNode();
    HashNode(Type data);
    HashNode<Type> * get(long index);
    bool contains(HashNode<Type> * value);
    long getKey() const;
};

template <class Type>
HashNode<Type> :: HashNode()
{
    this->key = 0;
}

template <class Type>
HashNode<Type> :: HashNode(Type data) : Node<Type>(data)
{
    this->key = (long) &data;
}

template <class Type>
long HashNode<Type> :: getKey() const
{
    return this->key;
}



#endif /* HashNode_h */
