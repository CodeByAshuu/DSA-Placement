/*                                      -----   POINTERS   ----

POINTERS :  A variable that stores the memory address of another variable.
eg:- int age = 23 ; [age is variable name (ghar ka naam),
                    23 value inside variable (is the person living),
                    address stored in variable is called pointer(land where ghar is made)]

- The address of a variable is obtained using the unary operator &.
- '*' value at operator.

Syntax:
return_type *pointer_name = &variable_name;

-for normal variable we write : int age = 22;

-for pointer variable we write: int *pntr_var_name = &age;
    [* --> is called VALUE AT ADDRESS operator {jiske smane lagaye uspe stored address pe jo value hai, vo value mil jati hai }]
    [& --> is called VALUE OF {jiske samne lagaye uski address miljati hai}]
    means AGE ka address is now stored in PNTR_VAR_NAME variable.

- for checking where pointer is storing value of age : int _age = *pntr_var_name;
*/

#include <iostream>
using namespace std;

int main(){
    int x = 5;
    int *pointer = &x;
    cout << x << endl;
    cout << "pointer (prints value inside pointer variable) : " << pointer << endl;
    cout <<  "*pointer (prints value at the address stored in pointer variable) : " << *pointer << endl;
    cout <<  "&pointer (prints address of pointer variable) : " << &pointer << endl;
    cout << "&(*pointer) = &(x) : " << &(*pointer) << endl;
    cout <<  "&x : " << &x << endl;

    // 4 byte pointer
    cout << "sizeof(pointer) : " << sizeof(pointer) << endl;

    // wild pointer : Dereferencing this pointer may lead to errors such as segmentation faults. 
    // So, it is always recommended to initialize a pointer.
    int *wildPointer;

    // null pointer
    int *nullPointer = NULL;

    int age = 21;
    // void pointer
    void* voidPointer = &age;

    // Error: cannot dereference void pointer
    // cout << *voidPointer; 

    // Typecast before dereferencing
    cout << "Value pointed by void pointer: " << *(static_cast<int*>(voidPointer)) << endl;

    // ptr becomes dangling here
    int* danglingPointer = getPointer(); 
    
    // Undefined behavior
    // cout << *danglingPointer; 
    return 0;

    return 0;
}

/*The process of accessing the value present at the memory address pointed by the pointer is 
called dereferencing.

SIZE OF POINTERS
The size of pointer in a system is equal for every pointer no matter what type of data it is pointing to. 
It does not depend on the type, but on operating system and CPU architecture. T
The size of pointers in C++ is 

- 8 bytes for a 64-bit System
- 4 bytes for a 32-bit System

The logic is simple: pointers store the addresses of the memory and in a computer, 
the maximum width of a memory address is determined by the CPU architecture. 

For example, for a 64-bit CPU, the address will always be 64-bit wide. 
This can be verified using sizeof() operator.



.                                     - - - TYPES OF POINTER - - - 

A. Wild pointer :
When a pointer is created, it just contains a random address that may or may not be valid. 
This type of pointer is called wild pointer.

B.NULL Pointer :
A NULL pointer is a pointer that does not point to any valid memory location but NULL. 
It is often used to initialize a pointer when you do not want it to point to any object.

C. Void Pointer :
A void pointer (void*) is a special type of pointer in C++ that has no associated data type. 
It can hold the address of any data type, making it useful for generic programming. 
However, since the type is unknown, the compiler doesn't know how many bytes to read or how to interpret the data. 
Therefore, a void pointer cannot be directly dereferenced. 
It must first be explicitly typecast to the appropriate pointer type.

D. Dangling Pointer : 
A dangling pointer is a pointer that refers to memory which has already been freed or is no longer valid. 
This typically happens when:
- A pointer points to a local variable that has gone out of scope
- Dynamically allocated memory is deallocated using delete, but the pointer still holds the old address

Dereferencing a dangling pointer leads to undefined behavior, and is a common source of hard-to-find bugs.
*/

int* getPointer() {
    int x = 10;
    
    // returning address of local variable
    return &x; 
}
