//
// Created by Ben Johnson on 2019-02-01.
//
#ifndef LLCPP
#define LLCPP
#include "LinkedList.h"
#include <stdexcept>

template<typename T>
void LinkedList<T>::add(T data) {
    if (front == nullptr) {
        front = new Node<T>(data);
        back = front;
    } else {
        Node<T> * curr = new Node<T>(data);;
        back->next = curr; // have the old tail point to the new item
        back = curr;  // update our back pointer to the new item
    }
}

template<typename T>
LinkedList<T>::LinkedList() {
    front = nullptr;
    back = nullptr;
}

template<typename T>
Node<T> *LinkedList<T>::traverseTo(int index) {
    int i = 0;
    Node <T> * curr = front;
    while (i != index) {
        i++;
        curr = curr->next;
        if (curr == nullptr) {
            throw std::out_of_range("Index out of range.");
        }
    }
    return curr;
}

template<typename T>
T LinkedList<T>::get(int index) {
    Node<T>* curr = traverseTo(index);
    return curr->data;
}

template<typename T>
void LinkedList<T>::update(int index, T data) {
    Node<T>* curr = traverseTo(index);
    curr->data = data;
}

// This method is INEFFICIENT!  Why?  Try to fix it yourself!
template<typename T>
void LinkedList<T>::remove(int index) {
    Node<T>* curr = traverseTo(index);
    // removing front
    if (index == 0) {
        front = front->next;
    }

    if (index > 0) {
        Node<T>* previous = traverseTo(index - 1);
        //removing last
        if (back == curr) {
            back = previous;
        }
        previous->next = curr->next;
    }
    delete curr;
    curr = nullptr;
}

template<typename T>
LinkedList<T>::~LinkedList() {
    Node<T>* curr = front;
    while(curr != nullptr) {
        Node<T> *temp = curr;
        curr = curr->next;
        delete temp;
    }
}

#endif
