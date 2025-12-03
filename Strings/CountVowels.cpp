#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int count = 0;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for(char i : str){
        if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' ){
            count++;
        }
    }
    cout << "count : " << count << endl;
}