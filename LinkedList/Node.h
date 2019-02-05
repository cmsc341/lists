//
// Created by Ben Johnson on 2019-02-05.
//

#ifndef LISTS_NODE_H
#define LISTS_NODE_H


template <typename T>
class Node {
public:
    Node(T data) : data(data) {
        next = nullptr;
    }

public:
    T data;
    Node *next;
};


#endif //LISTS_NODE_H
