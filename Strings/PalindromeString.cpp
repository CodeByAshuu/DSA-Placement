#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// 125 valid palindrome

int main(){
    // string str1 = "A man, a plan, a canal: panama";
    string str1 = "race car";

    transform(str1.begin(),str1.end(), str1.begin(), ::tolower);

    str1.erase(remove(str1.begin(), str1.end(), ' '), str1.end());
    str1.erase(remove(str1.begin(), str1.end(), ','), str1.end());
    str1.erase(remove(str1.begin(), str1.end(), ':'), str1.end());

    // cout << str1;


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