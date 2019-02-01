//
// Created by Ben Johnson on 2019-02-01.
//

#ifndef LISTS_LINKEDLIST_H
#define LISTS_LINKEDLIST_H

#include "Node.h"

template <typename T>
class LinkedList {

public:
    LinkedList();

    virtual ~LinkedList();

    void add(T data);

    T get(int index);

    void update(int index, T data);

    void remove(int index);

private:
    Node<T> * traverseTo(int index);
    Node<T> * front;
    Node<T> * back;
};

#include "LinkedList.cpp"


#endif //LISTS_LINKEDLIST_H
