/*                                      - - - FUNCTION POINTER - - -

Address of Function: 
We all know that every function's code resides in memory, so every function has an address like all 
other variables in the program. 
The name of a function can be used to find the address of the function. 
We can get the address of a function by just writing the function’s name without parentheses in the function.


FUNCTION POINTER IN C++
The function pointer is used to point functions, similarly, the pointers are used to point variables. 
It is utilized to save a function's address. 
The function pointer is either used to call the function or it can be sent as an argument to another function.

SYNTAX:
//declaring
return_type (*FuncPtr) (parameter type, ....);  

// Referencing
FuncPtr= function_name;

// Dereferencing
data_type x=*FuncPtr;

*/

// C++ program to implementation
// Function Pointer
#include <iostream>
using namespace std;

const int a = 15;
const int b = 2;

// Function for Multiplication
int multiply() { return a * b; }

// Function containing function pointer as parameter
void print(int (*funcptr)())
{
    cout << "The value of the product is: " << funcptr() << endl;
}

int main(){
    // int (*func)(int, int);

    // func is pointing to the multiplyTwoValues function
    // func = multiply;

    // int prod = func(15, 2);
    // cout << "The value of the product is: " << prod << endl;

    print(multiply);

    return 0;
}
