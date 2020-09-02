// Step 1:  Write the .h public methods
// Step 2:  Write tests of the public methods
// Step 3:  Write the .h private methods/fields
// Step 4:  Write blank method implementations
// Step 5:  Test
// Step 6:  Write create operation(s)
// Step 7:  Test
// Step 8:  Write retrieve operation(s)
// Step 9:  Test
// You get the idea
#include <iostream>

using namespace std;

void segfaultTime();

int main() {
  segfaultTime();
}

void segfaultTime() {
  //  clone address for gl git repo benj1@gl.umbc.edu:/path/to/repo
  int * p ;
  cout << *p;
}

