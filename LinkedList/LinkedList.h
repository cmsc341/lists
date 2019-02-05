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

    void add(T index);

private:
    Node<T> * head;
    Node<T> *tail;
};

#include "LinkedList.cpp"

#endif //LISTS_LINKEDLIST_H
