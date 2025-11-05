/*                                         - - - SCOPE - - -

Variables are only accessible inside the region they are created. This is called scope.

A. Local Scope:
A variable created inside a function belongs to the local scope of that function, 
and can only be used inside that function.
A local variable cannot be used outside the function it belongs to.


B. Global Scope:
A variable created outside of a function, is called a global variable and belongs to the global scope.
Global variables are available from within any scope, global and local.

# NAMING VARIABLE
- if global and local variable have same name, it refers to where the variable is used.
However, you should avoid using the same variable name for both globally and locally variables as 
it can lead to errors and confusion.
In general, you should be careful with global variables, since they can be accessed and modified from any function
*/

#include <iostream>
using namespace std;

void myFunction() {
  // Local variable that belongs to myFunction
  int x = 5;

  // Print the variable x
  cout << x << endl;
}

// global variable
int x = 6;

void globalVar(){
    // we can use x here
    cout << x << endl;
}


int main() {
  myFunction();
  globalVar();
  cout << "global x : " << x << endl;
  return 0;
}
