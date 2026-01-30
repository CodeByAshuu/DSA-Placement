#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Anagram : a word or phrase that is made by arranging the letters of another word or phrase in a 
// different order 
// Heart -> Earth
// Note -> Tone
// Arc -> Car
// Gum -> Mug

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
    
    // O(nlogn)
    sort(str.begin(), str.end());
    sort(strr.begin(), strr.end());

   if(str == strr){
    cout << "Is Anagram";
   }else{
    cout << "Not Anagram";
   }

    return 0;
    
}