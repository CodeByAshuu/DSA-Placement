#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "Mississippi River";
    
    int n = str.length();
    int visited[100] = {false};
    for(int i = 0; i < n; i++){
        if(visited[i]){
            continue;
        }
        int count = 1;
        for(int j =i+1; j < n; j++){
            if(str[i] == str[j]){
                count++;
                visited[j] = true; 
            }
        }
        cout << str[i] << ": " << count  << endl;
    }
    return 0;
}