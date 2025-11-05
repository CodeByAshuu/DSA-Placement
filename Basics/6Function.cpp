/*                              - - - FUNCTION - - -

functions are block of resuable code
functions are used to reduce code redundancy
functions are used to improve code readability
functions are used to improve code maintainability

Syntax:

return-type function-name(parameters){
    //body of the function
}

1. Built-in Function
2. User defined Function

# parameter given while calling a function is called ARGUMENT/actual parameter [used to send value]
# parameter given while function definition is PARAMETER/formal parameter [used to receive value] : placeholder variable

*/
#include <iostream>
using namespace std;

// function declaration
void greet(){
    cout << "Hello Goodmorning!" << endl;
}

//function with parameter
void greetParameter(string name){
    cout << "Hello "  << name << endl;
}

/*
DEFAULT PARAMETER
1. Default Values Should be Specified in Function Declarations
2. Default Arguments Cannot Be Modified
3. Default Arguments Must Be Provided from Right to Left
4. Ambiguity in Function Overloading
*/
// DEFAULT PARAMETER
void greetDefaultParameter(string fname="Sagar"){
    cout << "Hello " << fname << endl;
}

int square(int x){
    return x*x;
}

int add(int a, int b){
    return a+b;
}

// PASS BY VALUE : A copy of the variable is passed to the function.
// Changes made inside the function don’t affect the original variable.

int swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}


// PASS BY REFERENCE: The actual variable (memory address) is passed.
// Changes inside the function affect the original variable.

int swapReference(int &x, int &y){  // address of x and address of y is passed 
    int temp = x;
    x = y;
    y = temp;
}


// PASS BY POINTER : Instead of passing the variable or its reference, you pass its address (pointer) to the function.
// The function then uses the pointer to modify the original variable.

int swapPointer(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

// A pointer stores an address.
// A reference acts as an alias to the same variable.

int main(){
    // function call
    greet();
    greetParameter("Sagar");
    greetDefaultParameter();
    greetDefaultParameter("Stuti");
    square(4);
    add(5,5);

    int x = 5, y = 6;
    cout << "Before swapping : x = " << x << ", y = " << y << endl;
    swap(x,y);
    cout << "After swapping (call by value): x = " << x << ", y = " << y << endl ;
    swapReference(x,y);
    cout << "After swapping (call by reference): x = " << x << ", y = " << y << endl ;
    swapPointer(&x,&y);
    cout << "After swapping (call by pointer): x = " << x << ", y = " << y << endl ;


}

// 11 nov : linux and shell programming
// execution : 10
// viva : 20  



