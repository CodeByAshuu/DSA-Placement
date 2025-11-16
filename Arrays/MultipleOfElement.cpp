#include <iostream>
using namespace std;



int main(){
    int n;
    cout << "enter number of ele: ";
    cin >> n;
    int arr[n];
    for(int i=0; i <n; i++){
        cin >> arr[i];
    }

    int mul = 1;
    for(int i =0; i<n; i++){
        mul *= arr[i];
    }
    cout << "multiplication: " << mul;

    return 0;
}