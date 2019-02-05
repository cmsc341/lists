//
// Created by Ben Johnson on 2019-02-01.
//
#ifndef dogs
#define dogs

#include "LinkedList.h"

template<typename T>
LinkedList<T>::LinkedList() {

}

template<typename T>
void LinkedList<T>::add(T data) {
    Node<T> * current = new Node<T>(data);
    if (head == nullptr) {
        head = current;
        tail = current;
    } else {
        Node<T> * temp = tail;
        tail = current;
        temp->next = current;
    }

}
#endif
