//
// Created by Ben Johnson on 2019-02-01.
//

#ifndef LISTS_LINKEDLIST_H
#define LISTS_LINKEDLIST_H


class LinkedList {
public:
  LinkedList();
  ~LinkedList();



  void append(int value);
  int get(int index);
  int insert(int index, int value);
  int remove(int index);
  int update(int index, int value);

};


#endif //LISTS_LINKEDLIST_H
