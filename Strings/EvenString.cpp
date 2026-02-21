#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int minRemovals(string s) {
    int n = s.length();
    int deletions = 0;
    bool needFirst = true;
    char prev = 0;

    for (int i = 0; i < n; i++) {
        if (needFirst) {
            prev = s[i];
            needFirst = false;
        } else {
            if (s[i] == prev) {
                needFirst = true;  // pair completed
            } else {
                deletions++;  // delete this character
            }
        }
    }

    // If one character left unmatched
    if (!needFirst) deletions++;

    return deletions; 
}


int main(){
    string s = "aabbdabdccc";
    int minRemoval = minRemovals(s);
    cout << minRemoval << "\n";
    return 0;
}

