//
//  Node.hpp
//  TimerProject
//
//  Created by Segota, Sheradon on 2/6/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp
template <class Type>

class Node
{
private:

protected:
    Type data;
public:
    Node()
    Node(Type data);
    void setData(TypeData);
    Type getData();
};
template <class Type>
Node<Type> :: Node()
{
    this->data = data;
}

template <class Type>
Type Node<Type> :: getData()
{
    return data;
}

#endif /* Node_hpp */
