#include <iostream>
using namespace std;

int main(){
    int i= 0;
    int n=4;
    while(i<n){
        int j =0;
        while(j < n-i){
            cout << " ";
            j++;
        }
        int k = 0;
        while(k <(2*i)+1){
            cout << "*";
            k++;
        }
        cout << endl;
        i++;
    }
    return 0;
}