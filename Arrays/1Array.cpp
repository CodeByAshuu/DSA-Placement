/*                                          - - - ARRAY - - - 

An array is a collection of elements of the same type placed in contiguous memory locations. 
It allows you to store multiple values under a single name and access them using an index.


SYNTAX:
datatype variableName = {var1,var2,var3};
datatype variableName = datatype[size];

ex:
int prime = {2,3,5,7,11};
char name = char[26];

*/

#include <iostream>
using namespace std;

int main(){
    int num[5] = {1,2,3,4,5};
    int n[5];
    char charac[5];

    // initialize all elements to zero (only works for zero)
    int zero[5] = {0};
    for(int i =0;i<5; i++){
        cout <<zero[i] << endl;
    }

    //filling data in array
    n[0] = 1;
    n[1] = 2;
    n[2] = 3;

    //empty array gives garbage value
    cout << n[4] << " " << n[3] << endl;

    // traverse through array : O(n)
    for(int i =0;i<5; i++){
        cout <<num[i] << endl;
    }

    // size of array ?
    cout << "size of num array : " << sizeof(num)<< endl;   //size = length * (size of datatype)
    cout << "size of charac array : " << sizeof(charac) << endl; //5
    int m;
    cout << "Enter number of entry to take : ";
    cin >> m;
    int inputarr[m];

    for(int i=0; i < m; i++){
        cin >> inputarr[i];
    }

    for(int i=0; i < m; i++){
        cout << inputarr[i] << " ";
    }
    cout << endl;

    //updating an element of an array : O(1) 
    inputarr[0] = 1;
    for(int i=0; i < m; i++){
        cout << inputarr[i] << " ";
    }
    return 0;
}