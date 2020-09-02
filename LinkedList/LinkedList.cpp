//
// Created by Ben Johnson on 2019-02-01.
//

#include "LinkedList.h"
#include <iostream>

using namespace std;

void LinkedList::append(int value) {
    Node * node = new Node(value);
    if (head == nullptr) {
        head = node;
    } else {
        tail->next = node;
    }
    tail = node;
}

LinkedList::LinkedList() {
    tail = nullptr;
    head = nullptr;
}

void LinkedList::dump() {
    for (Node * curr = head; curr != nullptr; curr = curr->next) {
        cout << curr->data << endl;
    }
}

void LinkedList::insert(int value, int index) {

}

int LinkedList::get(int index) {
    Node * temp = head;
    for (int i = 0; i < index; ++i) {
        // check out of bounds??
        temp = temp->next;
    }
    return temp->data;
}

void LinkedList::remove(int index) {
    Node * temp = head;
    for (int i = 0; i < index; ++i) {
        // check out of bounds
        temp = temp->next;
    }
    if (index == 0) {
        head = temp->next;
        delete temp;
        // remove the first item
    } else if (temp->next == nullptr) {
        // remove the last item
    } else {
        // remove something in the middle
    }

}

Node::Node(int value) {
    data = value;
    next = nullptr;
}
