/*                                        - - - POINTER ARITHMATIC - - -

Pointer arithmetic means performing arithmetic operations on pointers. 
It refers to the operations that are valid to perform on pointers.

1. INCREMENTING & DECREMENTING
Incrementing or decrementing a pointer will make it refer to the address of the next or previous data 
in the memory. This process differs from incrementing and decrementing numeric data. 

2. ADDING CONSTANT TO POINTER

3. SUBTRACTING CONSTANT TO POINTER

4. SUBSTRACTION OF 2 POINTERS OF SAME DATATYPE
The Subtraction of two pointers can be done only when both pointers are of the same data type. 
The subtraction of two pointers gives the number of elements present between the two memory addresses so 
it is primarily valid if the two pointers belong to the same array.

For Example, in an array arr[10], ptr1 point points to the element at index 2 and ptr2 points to the 
element at index 4, then the difference between two pointers will give you the number of elements between them.

5. COMAPRISION OF POINTERS
We can perform a comparison between the two pointers using the relational operators(>, <, >=, <=, ==, !=).
We generally use this operation to check whether the two-pointer as pointing to the same memory location 
or not.

6. COMPARISION TO NULL
We can compare the pointer of a type to NULL. 
This operation helps us to find whether the given pointer points to some memory address or not. 
It helps us to control errors such as segmentation faults.

*/

#include <iostream>
using namespace std;

int main() {

    int n = 27;
    
    // Storing address of n in ptr
    int* ptr = &n;

    // Print size of int
    cout << "Size of int: " << sizeof(int) << endl;

    // Print the address stored at ptr
    cout << "Before Increment: " << ptr << endl;
    
    // Increment pointer
    ptr++;
    cout << "After Increment: " << ptr << endl;

    // Print the address stored at ptr
    cout << "Before Decrement: " << ptr << endl;
    
    // Decrement pointer
    ptr--;
    cout << "After Decrement: " << ptr << endl;

    //Address stored before adding integer value
    cout << "Address stored in ptr: " << ptr << endl;

    // Adding the integer value 1 to the pointer ptr
    ptr = ptr + 1;
    cout << "Adding 1 to ptr: " << ptr << endl;     //addded 1*4(size of the pointer)= 4, to the pointer address

    // Adding the integer value 2 to the pointer ptr
    ptr = ptr + 2;
    cout << "Adding 2 to ptr: " << ptr << endl;             //addded 2*4(size of the pointer)= 8, to the pointer address

    // Address stored before subtracting integer value
    cout << "Address stored in ptr: " << ptr << endl;

    // Subtracting the integer value 1 from pointer ptr
    ptr = ptr - 1;
    cout << "Subtract 1 from ptr: " << ptr << endl;

    // Pointer Substraction
    int arr[5] = {1, 2, 3, 4, 5};

    int* ptr1 = &arr[2];    //3

    // Adding 4 to ptr1 and stored in ptr2
    int* ptr2 = &arr[4];    //5

    // Subtracting ptr2 from ptr1
    cout << "ptr2 - ptr1 : " << ptr2 - ptr1 << endl;    //5-3


    int a = 10;     //a is stroing 10
    int* p = &a;    //p storing address of a
    int** q = &p;   //q(pointer to  pointer) storing the address of p
    int* r = *q;    //*q means “value stored at the address in q” → that’s p , r becomes equal to p.r also points to a.

    // comparing equality
    if (p == r) {
        cout << "Both point to same memory location";
    }
    else {
        cout << "p points to: " << p << endl;
        cout << "q points to: " << q << endl;
        cout << "r points to: " << r << endl;
    }

    // comparing to null
    int x = 10;
    int* ptr4 = NULL;
    ptr4 = &x;
    if (ptr4 == NULL) {
        cout << "No value is pointed";
    }else {
        cout << *ptr4;
    }
    return 0;
}