#include <iostream>
#include <string>
using namespace std;

int main(){
    string greeting = "Hello";
    for(char i : greeting){
        cout << i << " " ;
    }
    cout << endl;
    return 0;
}