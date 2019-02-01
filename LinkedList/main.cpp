#include "LinkedList.h"
#include <iostream>

using namespace std;

int main() {
    LinkedList<int> list;
    list.add(3);
    list.add(4);
    list.add(6);
    cout << "Item at position 0 is " << list.get(0) << endl;
    assert(list.get(0) == 3);
    list.update(0, 5);
    assert(list.get(0) == 5);
    assert(list.get(1) == 4);
    list.remove(1);
    assert(list.get(1) == 6);
    cout << "Done" << endl;
}

