#include "LinkedList.h"
#include <iostream>
using namespace std;

int main() {
    LinkedList list;
    list.append(3);
    list.append(4);
    list.insert(2, 1);
//    try {
//        list.insert(5, 5);
//    } catch (exception ex) {
//        cout << "Exception caught, yay!" << endl;
//    }
    cout << "List should be 3, 2, 4" << endl;
    list.dump();
//    cout << "Should be 4" << endl;
//    list.get(2);
//
//    list.remove(1);
//    cout << "Should be 3, 4" << endl;
//    list.dump();
//
    LinkedList lots;
    for (int i = 0; i < 1000000; i++) {
        lots.append(i);
    }
    lots.insert(12, 2);
    cout << "Should be a lot" << endl;
    lots.dump();
}

