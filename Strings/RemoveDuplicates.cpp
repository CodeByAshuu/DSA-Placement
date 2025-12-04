#include <iostream>
#include <string>
using namespace std;

int main(){
    string abc = "aabbcc";
    int n = abc.length();
    string programming = "programming";
    int k = programming.length();
    int visited[100] = {false};
    for(int i = 0; i < n; i++){
        if(visited[i]){
            continue;
        }
        for(int j = i+1; j < n; j++){
            if(abc[i] == abc[j]){
                visited[j] = true;
            }
        }
        cout << abc[i];
    }
    cout << endl;

    int visitedd[100] = {false};
    for(int i = 0; i < k; i++){
        if(visitedd[i]){
            continue;
        }
        for(int j = i+1; j < k; j++){
            if(programming[i] == programming[j]){
                visitedd[j] = true;
            }
        }
        cout << programming[i];
    }

    return 0;
}