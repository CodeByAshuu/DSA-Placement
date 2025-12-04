#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string Hello = "Hello";
    string reverseHello = "";
    for(char i: Hello){
        reverseHello.insert(0, string(1, i));
    }
    cout << reverseHello <<endl;
}