//
// Created by Ben Johnson on 2019-02-01.
//

#ifndef LISTS_LINKEDLIST_H
#define LISTS_LINKEDLIST_H
class LinkedList;
class Node {
private:
    Node(int value);

    friend LinkedList;
    int data;
    Node * next;
};
class LinkedList {

public:
    LinkedList();

    void append(int value);

    void dump();

    void insert(int value, int index);

private:
    Node * head, * tail;
};


#endif //LISTS_LINKEDLIST_H
