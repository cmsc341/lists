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
    T get(int index);
    Node<T> * traverse(int index);

    void update(int index, T data);

    void remove(int index);

private:
    Node<T> * head;
    Node<T> *tail;
};

#include "LinkedList.cpp"

#endif //LISTS_LINKEDLIST_H
