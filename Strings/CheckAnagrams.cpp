#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str = "listen";
    string strr = "silent";

    // lowercase
    transform(str.begin(),str.end(), str.begin(), ::tolower);
    transform(strr.begin(),strr.end(), strr.begin(), ::tolower);

    // remove space
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    strr.erase(remove(strr.begin(),strr.end(), ' '), strr.end());

    // if size is not equal(means frequency is not same)
    if(str.size() != strr.size()){
        cout << "Not Anagram";
        return 0;
    }
    
    sort(str.begin(), str.end());
    sort(strr.begin(), strr.end());

   if(str == strr){
    cout << "Is Anagram";
   }else{
    cout << "Not Anagram";
   }

    return 0;
    
}