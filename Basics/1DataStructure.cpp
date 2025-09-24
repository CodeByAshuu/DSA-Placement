/*
DATA TYPES IN C++

1. Primary or Built-in
- int (4): whole number
- float (4): decimal number
- double (8): decimal number
- char (1): single character
- bool (1): true or false

2. Derived Data Types
- array : collection of elements of same data type
- pointer : variable that stores memory address of another variable
- reference : alias of another variable
- function : block of code that performs a specific task

3. User-defined Data Types
- class : collection of variables and functions
- enum : collection of named constants
- struct : collection of variables and functions



Data Type Modifiers
- signed : used with int data type to represent positive and negative numbers(-128 to +128)
- unsigned : used with int data type to represent only positive numbers (0 to 255)
- short : used with int data type to represent smaller size of integer
- long : used with int data type to represent larger size of integer
- float : used with double data type to represent smaller size of decimal number
- double : used with float data type to represent larger size of decimal number

*/
#include <iostream>
using namespace std;

int main() {
    cout << sizeof(int) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(bool) << endl;

    cout << sizeof(unsigned int) << endl;           //4
    cout << sizeof(unsigned short int) << endl;     //2
    cout << sizeof(unsigned long int) << endl;      //8
    cout << sizeof(short int) << endl;              //2
    cout << sizeof(long int) << endl;               //8
    cout << sizeof(long long int) << endl;          //8
    cout << sizeof(unsigned long long int) << endl; //8

    cout << sizeof(signed char) << endl;        //1
    cout << sizeof(unsigned char) << endl;      //1
    return 0;
}