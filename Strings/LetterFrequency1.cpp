#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "Mississippi River";
    int freq[256] = {0};

    for(char c : str){
        freq[(unsigned char)c]++;
    }

    for(int i = 0; i < 256; i++){
        if(freq[i] > 0){
            cout << char(i) << ": " << freq[i] << endl;
        }
    }
}
