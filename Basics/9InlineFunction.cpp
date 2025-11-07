/*                                       - - - INLINE FUNCTION - - - 

An inline function is a function in C++ whose code is expanded at the point of call at compile time. 
It reduces function-call overhead.

The inline keyword suggests replacing a function call with its code to reduce overhead.
Inlining is a request, not guaranteed by the compiler.
The compiler may ignore inlining if the function contains loops, recursion, static variables, switch/goto, 
or a non-void function without a return statement..


🔹 Function call overhead means

the extra time and memory a program spends to call and return from a function, apart from the 
actual work the function does.

# When you call a function, these things happen:
The arguments are passed (copied or referenced).
The return address is saved (so it knows where to go back).
A new stack frame is created (for local variables).
After execution, the stack is unwound and control returns.

All of that = overhead ⚙️
*/

// function call overhead
int add(int a, int b) {
    return a + b;
}

// Even though a + b is simple, the compiler still needs to:
// Push 5 and 6 on the stack
// Jump to add()
// Create space for local vars
// Return the result

/*
WHY IT MATTERS?
For small or frequently called functions (like inside loops or recursion), this overhead can 
slow performance.

HOW TO FIX IT ?
Using Inline functions for small ones:
Here, the compiler replaces the function call with its code — no call overhead.
*/
#include <iostream>
using namespace std;

// example wehre inline function is ignored by compiler
inline void displayMessage()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Hello " << i << endl;
    }
}
// The function contains a loop, making it large.
// Modern compilers may ignore inline for bigger functions.
// The program works the same whether inline is used or not.

int main(){

    int sum = add(5, 6); // function call → overhead occurs here
    cout << sum << endl;

    //replaces this call with the actual code
    cout << add(5,6) << endl;

    displayMessage();
    return 0;
}

/*                              - - - INLINE FUNCTION IN CLASS - - -

All the functions defined inside the class are implicitly inline. 
Thus, all the restrictions of inline functions are also applied here. 
If you need to explicitly declare an inline function in the class, then just declare the function inside the class and define it outside the class using the inline keyword.

*/

