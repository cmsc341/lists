// Step 1:  Write the .h public methods
// Step 2:  Write tests of the public methods
// Step 3:  Write the .h private methods/fields DEFINITIONS
// Step 4:  Write blank method implementations
// Step 5:  Test
// Step 6:  Write create operation(s)
// Step 7:  Test (might still fail, that's ok!)
// Step 8:  Write retrieve operation(s)
// Step 9:  Test (see some passing now)
// You get the idea
#include <iostream>
#include "LinkedList.h"

using namespace std;

void segfaultTime();

void testGetAndAppend();

int main() {
  //segfaultTime();
  testGetAndAppend();


}

void testGetAndAppend() {
  LinkedList l;
  l.append(5);
  if (l.get(0) == 5) {
    cout << "Pass" << endl;
  } else {
    cout << "Fail" << endl;
  }
  assert(l.get(0) == 5);
}

void segfaultTime() {
  //  clone address for gl git repo benj1@gl.umbc.edu:/path/to/repo
  int * p = new int(3);
  cout << *p << endl;
  delete p;
  for (int i = 0; i < 1000; ++i) {
    int * q = new int(5);
  }

  cout << *p << endl;
}

