/*
A header file in C++ is a file that contains declarations (not the actual code) of functions, 
constants, macros, and variables that can be used in multiple programs or files.
*/

/*
# TYPES OF HEADER FILES
There are two types of header files in C++: 

1. Standard Header Files/Pre-existing header files
2. User-defined header files
*/

/*
1. Standard Header Files/Pre-existing header files
These are built-in header files that come with the C++ standard library. 
They provide commonly used functions and classes, so we don't have to write everything 
from scratch.

<iostream>
It contains declarations for input and output operations using streams, such as std::cout, 
std::cin, and std::endl .

<cmath>
It provides mathematical functions like sqrt(), pow(), sin(), cos(), etc.

<cstdlib>
Declares functions involving memory allocation and system-related functions, such as malloc(), 
exit(), and rand()

<cstring>
It is used to perform various functionalities related to string manipulation like strlen(), 
strcmp(), strcpy(), size(), etc.

<vector>
It is used to work with container class for dynamic arrays (vectors) functions like begin() , 
end().

<string>
Provides the std::string class and functions for string manipulation

<iomanip>
It is used to access set() and setprecision() function to limit the decimal places in variables.

<cerrno>
It is used to perform error handling operations like errno(), strerror(), perror(), etc.

<ctime>
It is used to perform functions related to date() and time() like setdate() and getdate(). 
It is also used to modify the system date and get the CPU time respectively.
*/

// C++ program to demonstrate Standard header files

#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // using <iostream>
    cout << "Hello, Geek!" << endl;

    // using <cmath>
    double squareRoot = sqrt(25);
    cout << "Square root of 25 is: " << squareRoot << endl;

    // using <cstdlib>
    int randomNum = rand() % 100; // Generate a random number between 0 and 99
    cout << "Random number is : " << randomNum << endl;

    // using <cstring>
    char mystr1[] = "Hello";
    char mystr2[] = " World";
    strcat(mystr1, mystr2);
    cout << "string after concatenation: " << mystr1 << endl;

    // using <vector>
    vector<int> numbers = { 1, 2, 3, 4, 5 };
    cout << "Vector elements are: ";
    for (const auto& num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // using <string>
    string greeting = "Hello, ";
    string name = "Programmer";
    string fullGreeting = greeting + name;
    cout << "Greeting message: " << fullGreeting << endl;

    return 0;
}

/*
2. User-defined header files
These files are defined by the user and can be imported using #include" ". 
These are mainly used to encapsulate our own functions, classes, or declarations so that 
we can organize our code and reuse our code by separating it in different files.



*/

// #include <graphics.h>

// int main()
// {
//     initgraph(); // Initializing graphics system
//     circle(320, 240, 50); // Drawing a circle
//     delay(2000); // take Pause for 2 seconds
//     closegraph(); // Closing graphics system
//     return 0;
// }

/*
HOW TO CREATE A USER-DEFINED HEADER FILE
1. Create a new file with a .h extension (for example, myheader.h).
2. Add your function declarations, class definitions, or constants in this file.
3. Save the file.
4. In your main C++ file, include this header file using #include "myheader.h".
5. Now you can use the functions, classes, or constants defined in your header file 
in your main C++ file.
*/