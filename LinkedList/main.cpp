#include "LinkedList.h"
#include <iostream>

using namespace std;

int main() {
    LinkedList list;
    list.append(3);
    list.append(5);
    list.insert(4, 1);
    cout << "Should be 3, 4, 5" << endl;
    list.dump();
//    list.append(74);
//    cout << "The item at position 3 is " << list.get(3) << " should be 74" << endl;
//    if (list.get(3) == 74) {
//        cout << "Get() passed" << endl;
//    } else {
//        cout << "Get() failed" << endl;
//    }
//    list.remove(2);
//    cout << "Should be 3, 4, 74" << endl;
//    list.dump();
}

