/* 
The preprocessor in C++ is a tool that process the code before it is compiled 
by the compiler. 

It does many tasks such as including header files, conditional compilation, 
text substitution, removing comments, etc.

Preprocessor also allows the developers to select which portions of code should be included 
or excluded.



*/

/*                                 Preprocessor Directives

Preprocessor directives are special instruction that are given to the preprocessor, 
which is a part of the compilation process that runs before the actual code is compiled.

These directives start with the # symbol and are used to prepare our code by including files, 
defining constants, or deciding which parts of the code should be compiled.

They are not regular C++ statements, so they do not end with a semicolon (;).

*/

/*
1. #include
The #include preprocessor directive is used to include the contents of one file into the 
current one, use the #include directive. Header files are often included using this directive.

Syntax
#include <file_name>        includes the files from the system directory
#include "file_name"        includes the file from directory the source file is currently in.
*/

// Including the standard I/O stream header file
#include <iostream>
using namespace std;

int main() {
    cout << "GeeksforGeeks";
    return 0;
}

/*
2. #define
The #define preprocessor directive is used to define macros. 
Macro names are symbolic and may be used to represent constant values or short bits of code. 
Using #define preprocessor makes our code more readable and easily maintainable as we 
can replace numbers and code snippets with a meaningful name.

Syntax
#define macro_name value
*/

#include <iostream>
using namespace std;

// Defining macros
#define PI 3.14159
#define findSquare(x) (x * x)

int main() {
    double radius = 5.0;
    
    // Macro name PI and findSquare will be substituted
    // by preprocessor
    double area = PI * findSquare(radius);

    cout << area;
    return 0;
}