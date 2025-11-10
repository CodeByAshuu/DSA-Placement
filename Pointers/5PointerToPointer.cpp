/*                                      - - - POINTER TO POINTER - - -

we already know that a pointer stores the memory address of other variables. 
So, when we define a pointer to a pointer, the first pointer is used to store the address of the variables, 
and the second pointer stores the address of the first pointer. 
For this very reason, this is known as a "Double Pointer" or "Pointer to Pointer".


SYNTAX:
data_type_of_pointer **name_of_variable = & normal_pointer_variable;



*/

#include <iostream>
using namespace std;

int main(){
    int age = 21;
    int* agePtr = &age;
    int** PtrAge = &agePtr;

    cout << "age points to : " << age << endl;
    cout << "address of age : " << &age << endl;
    cout << "agePtr points to : " << agePtr << endl;
    cout << "address of agePtr to : " << &agePtr << endl;
    cout << "PtrAge points to : " << PtrAge << endl;

    return 0;
}