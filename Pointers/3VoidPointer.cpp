/*                                          - - - VOID POINTER - - - 

a void pointer is a pointer that is declared using the 'void' keyword (void*).

It is different from regular pointers it is used to point to data of no specified data type.
It can point to any type of data so it is also called a "Generic Pointer". 


APPLICATION ?

1. Genenric Coding

The concept of a generic pointer means a pointer that can be used to point to data of any data type. 
This is helpful in situations where you need a single pointer that can handle different data types 
dynamically.

Let's see an example for this, let's first declare variables of different types (int, double, char). 
then declare a void pointer named "generic pointer". 
We use the void pointer to point to each of the variables in succession with the help of typecasting.

2. Dynamic Memory Allocation

Dynamic memory allocation is performed in C++, when the size of memory needed is not known at compile time 
then we perform Dynamic memory Allocation using operators like new or malloc. 
Void pointers can be used to allocate memory for any data type. 
In C++, "new" keyword is used for dynamic memory allocation which returns a pointer to the allocated memory. 
After allocating memory, We need perform type casting to use the allocated memory with a specific data type.



*/




#include <iostream>
using namespace std;

int main()
{
    // int* ptr;
    // float f = 90.6;
    // ptr = &f; // error
    // cout << "The value of *ptr is : " << *ptr << endl;

    // Initializing multiple variables of different datatype
    int n = 10;
    float f = 25.25;
    char c = '$';

    // Initializing a void pointer
    void* ptr;

    ptr = &n; // pointing to int
    cout << "The value of n " << n << endl;
    cout << "The Address of n " << ptr << endl;

    ptr = &f; // pointing to float
    cout << "The value of n " << f << endl;
    cout << "The Adress of n " << ptr << endl;

    ptr = &c; // pointing to char
    cout << "The value of n " << c << endl;
    cout << "The Adress of n " << ptr << endl;

    // Allocate memory for an integer using new
    void* voidPtr = new int;

    // Type casting the void pointer to int* for usage
    int* intPtr = static_cast<int*>(voidPtr);

    // Assign a value to the allocated memory
    *intPtr = 42;

    // Print the value from the allocated memory
    cout << "Value from allocated memory: " << *intPtr << endl;

    // Deallocate the memory
    delete intPtr;

    return 0;
}

// output : error: cannot convert ‘float*’ to ‘int*’ in assignment
/*The above program gives an error the reason is int type pointer ptr is declared and we are trying to 
store the memory address of a float data type into an int pointer, which gives an error. 
But if we declare void pointer it allows us to change their data type. So, declare ptr as a void pointer 
and the program will not give any error. */