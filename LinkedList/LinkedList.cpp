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
    // 1. insert at the front
    Node * node = new Node(value);
    if (index == 0) {
        node->next = head;
        head = node;
    } else {
        int i = 0;
        Node * nodeBeforeSpot = head;
        while (i < index - 1) {
            nodeBeforeSpot = nodeBeforeSpot->next;
            i++;
        }
        // Deal with the 3rd case here
        //  what surgery?

        Node * newNext = nodeBeforeSpot->next;
        if (newNext == nullptr) {
            tail = node;
        }
        nodeBeforeSpot->next = node;
        node->next = newNext;

    }
}

Node::Node(int value) {
    data = value;
    next = nullptr;
}
