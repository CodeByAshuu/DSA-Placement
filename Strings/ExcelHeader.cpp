#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout << "enter number: ";
    cin >> n;
    string str = "";
    while(n>0){
        n--;
        int rem = n%26;
        char c = 'A' + rem;
        str = c + str;
        n/=26;
    }

    cout << str;
    return 0;
}