#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i <n ; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    // reverse array
    reverse(arr, arr+n);

    // printing reversed array
    for(int i = 0; i <n ; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    k %= n;

    // reverse first k ele
    reverse(arr, arr+k);

    // reverse last n-k ele
    reverse(arr+k, arr+n);

    for(int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";



}