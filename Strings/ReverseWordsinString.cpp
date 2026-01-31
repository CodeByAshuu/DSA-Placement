// 151 Reverse Words in a String
#include <string>
#include <iostream>
using namespace std;

// string reverseWords(string s) {
    
// }

int main(){
    string s =  "the sky is blue";
    string ans = "";
    int n = s.size();
    int countLetter=0;
    string temp = "";
    for(int i = n-1 ; i >= 0; i--){
        countLetter++;
        string t = s.substr(i, i-1);
        if( t == " " || i==0){
            temp += s.substr(i,countLetter);
        }
        ans = temp;
    }
    cout << ans;
}