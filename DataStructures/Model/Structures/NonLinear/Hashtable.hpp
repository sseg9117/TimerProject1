//
//  Hashtable.hpp
//  TimerProject
//
//  Created by Segota, Sheradon on 5/1/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#include "../../Nodes/HashNode.hpp"
#include <cmath>
#include <assert.h>

#ifndef Hashtable_h
#define Hashtable_h
template <class Type>
bool Hashtable<Type> :: contains(HashNode<Type> * value)
{
    if (internalStorage[findPosition(value)]->getData() == value-> getData())
    {
        return true;
    }
    
    long other = handleCollision(findPosition(value));
    if (internalStorage[other]->getData() == value->getData())
    {
        return true;
    }
    
    return false;
}
template <class Type>
HashNode<Type> * Hashtable<Type> :: get(long index)
{
    assert(index < capacity);
    return internalStorage[index];
}
template <class Type>
long Hashtable<Type> :: getNextPrime()
{
    long nextPrime = (this->capacity * 2) + 1;
    
    while(!isPrime(nextPrime))
    {
        nextPrime += 2;
    }
    
    return nextPrime;
}

template <class Type>
bool Hashtable<Type> :: isPrime(long current)
{
    if(candidateNumber <= 1)
    {
        return flase;
    }
    else if(current == 2 || current == 3)
    {
        return ture;
    }
    else if(current % 2 == 0)
    {
        return false;
    }
    else
    {
        for(int next = 3; next <= sqrt(current) +1; next += 2)
        {
            if(current % next == 0)
            {
                return false;
            }
        }
        return ture;
    }
}
template <class Type>
long Hashtable<Type> :: findPosition(HashNode<Type> * insert)
{
    long insertPosition = insert->getKey() % this->capacity;
    return insertPosition;
}

template <class Type>
long Hashtable<Type> :: handleCollision(HashNode<Type> * current, long index)
{
    long shift = 17;
    
    for (long position = currentPosition + shift; position != current position; position += shift)
    {
        if(position >= capacity)
        {
            position = position % capacity;
        }
        
        if(internalStorage[position] == nullptr)
        {
            return position;
        }
    }
    
    return -1;
}

template <class Type>
long Hashtable<Type> :: getSize()
{
    return this->size;
}

template >class Type>
void Hashtable<Type> :: resize()
{
    long updatedCapacity = nextPrime();
    HashNode<Type> * * tempStorage = new HashNode<Type> * [updatedCapacity];
    
    std :: fill_n(tempStorage, updatedCapacity, nullptr);
    
    long oldCapacity = this->capacity;
    this->capacity = updatedCapacity;
    
    for(long index = 0; index < oldCapacity; index++)
    {
        if(hashTableStorage[index] != nullptr)
        {
            HashNode<Type> * temp = internalStorage[index];
            
            long position = findPosition(temp);
            if ( tempStorage[position] == nullptr)
            {
                tempStorage[position] = temp;
            }
            else
            {
                long updatedPosition = handleCollision(temp, position);
                if (updatedPosition != -1)
                {
                    tempStorage[updatedPosition] = temp;
                }
            }
        }
        internalStorage = tempStorage;
    }
}
template <class Type>
void Hashtable<Type> :: insert(Type value)
{
    this->size++;
    if(((this->size * 1.000) / this->capacity) > this->loadFactor)
    {
        resize();
    }
    
    HashNode<Type> * temp = new HashNode<Type>(value);
    long index = findPosition(temp);
    
    if(internal[index] == nullptr)
    {
        internalStorage[index] = temp
    }
    else
    {
        long updatedPosition = handleCollision(temp, index);
        if (updatedPosition != -1)
        {
            internal[updatedPosition] = temp;
        }
    }
}
        
#endif /* Hashtable_h */
