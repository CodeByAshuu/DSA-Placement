#include <iostream>
#include <string>
using namespace std;

int main(){
    string swiss = "swiss";
    string abcde = "aabbbccdde";
    string ab = "aabb";
    int n = swiss.length();
    int visited[100] = {false};
    for(int i = 0; i < n; i++){
        if(visited[i]){
            continue;
        }
        bool isDup = false;

        for(int j =i+1; j < n; j++){
            if(swiss[i] == swiss[j]){
                visited[j] = true; 
                isDup = true;
            }
        }
        if(!isDup){
            cout << swiss[i];
            return 0;
        }
    }

    cout << -1 << endl;
}