//
// Created by Ben Johnson on 2019-02-01.
//

#include "LinkedList.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
}

LinkedList::~LinkedList() {

}

void LinkedList::append(int value) {
    Node *node = new Node(value);
    if (head == nullptr) {
        head = node;
    } else {
        tail->next = node;
    }
    tail = node;
}

void LinkedList::dump() {
    Node * curr = head;
    while (curr != nullptr) {
        cout << curr->data << endl;
        curr = curr->next;
    }
}

void LinkedList::insert(int value, int index) {
    Node * node = new Node(value);
    if (index == 0) {
        node->next = head;
        head = node;
    } else {
        Node * curr = head;
        int i = 0;
        while (i < index - 1) {
            if (curr->next == nullptr) {
                throw new exception;
            }
            curr = curr->next;
            i++;
        }
        Node * newNext = curr->next;
        if (newNext == nullptr) {
            tail = node;
        }
        curr->next = node;
        node->next = newNext;
    }
}

int LinkedList::get(int index) {
    Node * current = head;
    for (int i = 0; i < index; ++i) {
        if (current->next == nullptr) {
            throw range_error("Out of range, nerd.");
        }
        current = current->next;
    }
    return current->data;
}

void LinkedList::remove(int index) {
    if (index == 0) {
        if (head == nullptr) {
            throw range_error("WRONG");
        }
        Node * toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }
    Node * current = head;
    Node * prev = nullptr;
    for (int i = 0; i < index; ++i) {
        if (current->next == nullptr) {
            throw range_error("Out of range, nerd.");
        }
        prev = current;
        current = current->next;
    }
    if (current == tail) {
        tail = prev;
        tail->next = nullptr;
        delete current;
    } else {
        prev->next = current->next;
        delete current;
    }
}

Node::Node(int data) {
    this->data = data;
    this->next = nullptr;
}
