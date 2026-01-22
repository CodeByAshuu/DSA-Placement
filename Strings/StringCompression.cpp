#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "aaabbcc";
    string st = "aaaaa";

    int n = str.size();
    for(int i=0; i < n; i++){
        int count = 1;
        int j = i + 1;
        while(j < n && str[i] == str[j]){
            count++;
            j++;
        }
        cout << str[i] <<count;
        i = j -1;
    }
    cout << endl;
    
    int n1 = st.size();
    for(int i=0; i < n1; i++){
        int count = 1;
        int j = i + 1;
        while(j < n1 && st[i] == st[j]){
            count++;
            j++;
        }
        cout << st[i] <<count;
        i = j -1;
    }
    return 0;
}