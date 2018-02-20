//
//  List.hpp
//  TimerProject
//
//  Created by Segota, Sheradon on 2/8/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#include <assert.h>
#include "../Nodes/LinearNode.hpp"

using namespace std;

#ifndef List_hpp
#define List_hpp
template <class Type>
class List
{
private:
    
protected:
    int size;

public:
    //Structure
    virtual void add(Type item) = 0;
    virtual void addAtIndex(int index, Type item) = 0;
    virtual Type remove(int index) = 0;
    virtual Type getFromIndex(int index) = 0;
    //Helper
    virtual int getSize() const = 0;
    virtual LinearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd() = 0;
};

#endif /* List_hpp */
