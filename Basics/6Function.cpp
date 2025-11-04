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
# parameter given while function definition is PARAMETER/formal parameter [used to receive value]

*/
#include <iostream>
using namespace std;

// function declaration
void greet(){
    cout << "Hello Goodmorning!" << endl;
}

void greetParameter(string name){
    cout << "Hello "  << name << endl;
}

int square(int x){
    return x*x;
}

int main(){
    // function call
    greet();
    greetParameter("Sagar");
    square(4);
}

// 11 nov : linux and shell programming
// execution : 10
// viva : 20