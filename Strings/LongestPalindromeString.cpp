#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "babac";
    string st = "cbbd";
    int n = str.size();

    // if string length is 1 , it is palindrome and itself is longest
    if(n<=1){
        cout << str;
        return 0;
    }

    int start = 0, maxLen=1;


    auto expand = [&](int left, int right){
        // jbtk left bda hai 0 se aur right chota hai string size se aur dono pointer value same hai tb tk.
        while(left >= 0 && right < n && str[left] == str[right]){
            int currLen = right - left + 1;
            if(currLen > maxLen){
                maxLen = currLen;
                start = left;
            }
            left--;
            right++;
        }
    };

    for(int i = 0; i < n; i++){
        // odd length palindrome
        expand(i, i);

        // even length palindrome
        expand(i, i+1);
    }

    cout << str.substr(start, maxLen);
}