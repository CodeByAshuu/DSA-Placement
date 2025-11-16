#include <iostream>
using namespace std;

// Time Complexity : O(n)
// Space Complexity: O(1)

int main(){
    int n;
    cout << "enter number of ele: ";
    cin >> n;
    int arr[n];
    for(int i=0; i <n; i++){
        cin >> arr[i];
    }
    for(int i =0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    n++;
    for(int i=n-1;i>0; i--){
        arr[i]=arr[i-1];
    }
    int value;
    cout << "enter value to enter at beginning: ";
    cin >> value;
    arr[0] = value;

    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}