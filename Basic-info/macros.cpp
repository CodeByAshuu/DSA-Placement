/*
Macros are shortcuts or placeholders that the preprocessor replaces before the code is compiled. 
They are defined using #define and can be used to create constants or code snippets.

SYNTAX :
#define MACRO_NAME macro_definition

MACRO_NAME: It is the name we give to the macro, that's usually in uppercase to differentiate it from ordinary C++ identifiers.
macro_definition: It is the code that the preprocessor will substitute whenever the macro is used.
*/

// C++ program to illustrate the macro definition
#include <iostream>
using namespace std;

// Define a macro to calculate the square of a number
#define SQUARE(x) (x * x)

int main()
{
    int n = 7;
    int result = SQUARE(n); // Expands to: (n * n)
    cout << "Square of " << n << " is " << result;
    return 0;
}

/*
TYPES OF MACROS
Macros can be classified into four types in C++:

1. Object-Like Macros
2. Function-Like Macros
3. Conditional Macros
*/

/*
1. Object-Like Macros
These macros are similar to constants and are used to define constant values.
Syntax:
#define MACRO_NAME value
*/
#include <iostream>
using namespace std;

// Define a constant for the value of PI
#define PI 3.14159

int main()
{
    double radius = 4.0;

    // Calculate the area of the circle
    double area = PI * radius * radius;

    cout << "Area of circle with radius " << radius
         << " is " << area;

    return 0;
}

/*
2. Function-Like Macros
These macros resemble functions and can take arguments. 
They are used to define small code snippets that can be reused.

Syntax:
#define MACRO_NAME(arguments) code

*/
#include <iostream>
using namespace std;

// Define a macro to print a value
#define PRINT(x) cout << "Value is: " << x

int main()
{
    int value = 42;
    // Print the value using the PRINT macro
    PRINT(value);
    return 0;
}

/*
3. Conditional Macros
These macros allow conditional compilation of code segments based on certain conditions.
Syntax:
#ifdef MACRO_NAME
#ifndef MACRO_NAME
#endif
#endif

*/

#include <iostream>

// Define a macro named DEBUG
#define DEBUG

int main() {
    int x = 5, y = 10;
    int sum = x + y;

    // This block will only be compiled if DEBUG is defined
    #ifdef DEBUG
        std::cout << "[DEBUG] x = " << x << std::endl;
        std::cout << "[DEBUG] y = " << y << std::endl;
        std::cout << "[DEBUG] sum = " << sum << std::endl;
    #endif

    // Always compiled
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}

/*
PREDEFINED MACROS
C++ provides several predefined macros that give information about the compilation 
environment.

Some commonly used predefined macros are:
__LINE__    : Expands to the current line number in the source file.
__FILE__    : Expands to the name of the current source file.
__DATE__    : Expands to the current date in "MMM DD YYYY" format.
__TIME__    : Expands to the current time in "HH:MM:SS" format.
__cplusplus : Expands to a long integer constant that represents the C++ standard version.

*/

// C++ program to illustrate the predefined macros
#include <iostream>
using namespace std;

int main()
{

    // Display the current line number and the source file name
    cout << "This is line " << __LINE__ << " in file "
         << __FILE__ << "\n";

    // Display the compilation date
    cout << "Compiled on " << __DATE__;

    return 0;
}

/*
ADVANTAGES  OF MACROS
1. Macros lets us reuse code without rewriting it.
2. Macros allow easy updates
3. Macros can control which code is included during compilation

DISADVANTAGES OF MACROS
1. Macros can cause bugs as they don't do type checking.
2. Macros can lead to unexpected behavior.
3. Macros increase code complexity.

*/