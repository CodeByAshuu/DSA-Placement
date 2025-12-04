#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1 = "level";
    string str2 = "racecar";

    int n = str1.length();
    bool isPalindrome = true;
    for(int i = 0; i < n/2; i++){
        if(str1[i] != str1[n-i-1]){
            isPalindrome = false;
            break;
        }
    }
    if(!isPalindrome){
        cout << str1 << " not is a palindrome" << endl;
    }else{
        cout << str1 << " is a palindrome" << endl;
    }
}