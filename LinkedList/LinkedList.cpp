//
// Created by Ben Johnson on 2019-02-01.
//
#ifndef dogs
#define dogs

#include "LinkedList.h"
#include <stdexcept>

template<typename T>
LinkedList<T>::LinkedList() {
    head = nullptr;
    tail = nullptr;
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

template<typename T>
Node<T> * LinkedList<T>::traverse(int index) {
    Node<T> * curr = head;
    int i = 0;
    if (index < 0) {
        throw std::out_of_range("too low");
    }
    while(i < index and curr != nullptr) {
        curr = curr->next;
        i++;
    }
    if (curr == nullptr) {
        throw std::out_of_range("too high");
    }
    return curr;
}

template<typename T>
T LinkedList<T>::get(int index) {
    Node<T> * curr = traverse(index);

    return curr->data;
}

template<typename T>
void LinkedList<T>::remove(int index) {
    // four cases:
    // remove first
    // remove last
    // remove only (first two combined)
    // remove from middle
}

template<typename T>
void LinkedList<T>::update(int index, T data) {
    Node<T> * curr = traverse(index);

    curr->data = data;
}

#endif
