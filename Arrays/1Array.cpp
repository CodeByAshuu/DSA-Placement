/*                                          - - - ARRAY - - - 

An array is a collection of elements of the same type placed in contiguous memory locations. 
It allows you to store multiple values under a single name and access them using an index.


SYNTAX:
datatype variableName = {var1,var2,var3};
datatype variableName = datatype[size];

ex:
int prime = {2,3,5,7,11};
char name = char[26];


// with size , garbage value
int arr[5];

// with size and values
int array[5] = {1,2,3,4,5}

//with size, partial size
int array[5] = {1,2};

//compiler counts the size
int array[] ={1,2,3,4,5};

// with size, initializing with 0
int array[5] = {0}

// character array
int character[] = "Ashu"

// input based initialization
int n;
cin >> n;
int arr[n];

# PASSING ARRAY TO A FUNCTION
Arrays are passed to functions using pointers, as the array name decays to a pointer to the first element. 
So, we also need to pass the size of the array to the function.

*/

#include <iostream>
using namespace std;


// PASSING ARRAY TO FUNCTION
void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int num[5] = {1,2,3,4,5};
    int n[5];
    char charac[5];

    //garbage value
    int array[5];   

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

    int arr1[] = {1,2,3,4,5,6};
    int size = sizeof(arr1)/ sizeof(arr1[0]);
    printArray(arr1, size);
    return 0;
}

