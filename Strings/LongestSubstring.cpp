#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

// Given a string, find the length of the longest substring that contains no repeated characters.

int main(){
    string str = "abcabcbb"; // 3 abc
    string strr = "bbbbb"; // 1 b

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    transform(strr.begin(), strr.end(), strr.begin(), ::tolower);
    
    vector<int> freq(256,0);
    int left = 0, right =0;
    int maxLen = 0;
    int startIndex= 0;  //starting index of the substring
    int n = str.size();
    while(right < n){
        char c = str[right];    //str[0]
        freq[c]++;              //freq

        // if repeated , move left pointer
        while(freq[c] > 1){
            freq[str[left]]--;
            left++;
        }

        // update best window
        if (right - left + 1 > maxLen) {
            maxLen = right - left + 1;
            startIndex = left;
        }

        maxLen = max(maxLen, right - left + 1);
        right++;
    }
     // Extract substring
    string longest = str.substr(startIndex, maxLen);

    cout << "Length: " << maxLen << endl;
    cout << "Substring: " << longest << endl;
    return 0;
}