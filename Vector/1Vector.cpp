/*
                            - - - VECTOR - - -

- dynamic array
- elements are stored in contiguous memory locations
- elements can be accessed using an index (position)

SYNTAX :
vector<data type> vectorName;  //size is 0
vector<data type> vectorName = {val1, val2, val3};
vector<data type> vectorName(size,default val in each index);


Traversing in Vector
for each loop: //i will store value in vector , not the index
for(int i : vectorName){
    cout << vectorName << endl;
}
*/

/*
STL file
- std::vector
- std::deque
- std::list
- std::forward_list
- std::array
- std::pair
- std::tuple
*/

#include <iostream>
#include <vector>
using namespace std;

// int main(){
//     //declare a vector of integers
//     vector<int> vec;
//     //declare a vector of strings
//     vector<string> vec2;
//     //declare a vector of floats
//     vector<float> vec3;
//     //declare a vector of doubles
//     vector<double> vec4;


//     //method 2
//     vector<int> vecInt= {1,2,3};
    
//     vector<float> vecFloat= {1.1,2.2,3.3};
//     vector<double> vecDouble= {1.1,2.2,3.3};

//     //method 3
//     vector<int> vecInt3(5,10); 
//     cout << vecInt3[1]<<endl;
//     for(int val:vecInt3){
//         cout << vecInt3[val] << endl;
//     }

//     return 0;
// }

/*
Vector function

- size : tells size
- push_back : inserts val at the end of the vector
- pop_back : removes the last element from the vector
- front : returns the first element of the vector
- back : returns the last element of the vector
- clear : removes all elements from the vector
- at : returns value AT given index
- capacity : prints the capacity of vector
- reserve : sets the capacity of vector
*/

/*
int main(){
    vector<int> vec = {1,2,3,4};
    //size of vector
    cout << "size = " << vec.size() << endl;
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;

    //push 5 in vector
    vec.push_back(5);
    cout << "after pushing element in vector : ";
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;
    cout << "size = " << vec.size() << endl;

    //remove last element
    vec.pop_back();
    cout << "after popping element from vector : ";
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;
    cout << "size = " << vec.size() << endl;

    //print 1st element
    cout << "first ele of vector : " << vec.front()<< endl;

    //print 2nd element
    cout << "last ele of vector : " << vec.back()<< endl;
    
    //print at a particular index
    cout << "element at index 1 : " << vec.at(2)<< endl;
    
    //remove every element
    vec.clear();

    cout << "size : " << vec.size() << endl;
    return 0;
}
*/

/*

#when vectors dont have space to store the new data,
it doubles the size of the vector to store the new data
suppose,
vec.push_back(0);  //size 1 ; capacity 1
vec.push_back(1);  //size 2 ; capacity 2
vec.push_back(2);  //size 3 ; capacity 4
vec.push_back(3);  //size 4 ; capacity 4

*/

int main(){
    vector<int> vec;


    vec.push_back(0);  //size 1 ; capacity 1
    cout << "size : " << vec.size();
    cout << "  capacity : " << vec.capacity() << endl;

    vec.push_back(1);  //size 2 ; capacity 2
    cout << "size : " << vec.size();
    cout << "  capacity : " << vec.capacity() << endl;

    vec.push_back(2);  //size 3 ; capacity 4
    cout << "size : " << vec.size();
    cout << "  capacity : " << vec.capacity() << endl;

    vec.push_back(3);  //size 4 ; capacity 4
    cout << "size : " << vec.size();
    cout << "  capacity : " << vec.capacity() << endl;

    vec.push_back(5);   //size 5; capacity 8
    cout << "size : " << vec.size();
    cout << "  capacity : " << vec.capacity() << endl;


    return 0;
}

