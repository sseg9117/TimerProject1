//
//  Hashtable.hpp
//  TimerProject
//
//  Created by Segota, Sheradon on 5/7/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#ifndef Hashtable_h
#define Hashtable_h

#include "Node.hpp"

template <class Type>
class Hashtable
{
private:
    HashNode<Type> ** internalStorage;
    long size;
    long capacity;
    double loadFactor;
    
    long getNextPrime();
    bool isPrime(long current);
    void resize();
    long findPosition(HashNode<Type>* insertedNode);
    long handleCollision(long index);
public:
    Hashtable();
    ~Hashtable();
    
    void insert(Type data);
    long getSize();
};

#endif /* Hashtable_h */
