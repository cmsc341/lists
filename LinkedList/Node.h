//
// Created by Ben Johnson on 2019-02-01.
//

#ifndef LISTS_NODE_H
#define LISTS_NODE_H

template <typename T>
class Node {
public:
    Node(T data) : data(data) {
        next = nullptr;
    }

    T data;
    Node * next;
};


#endif //LISTS_NODE_H
