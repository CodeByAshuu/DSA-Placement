#include <iostream>
using namespace std;

// Time Complexity: O(n²)
// Space Complexity: O(1)

int main(){
    int n;
    cout <<"enter number of elements: ";
    cin >> n;
    int arr[n];

    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }

    for(int i = 0;i < n; i++){
        cout << arr[i] << " ";
    }
    cout <<endl;

    for(int i = 1; i < n;i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev]  > curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }

    for(int i =0;i < n; i++){
        cout << arr[i] << " ";
    }
    cout <<endl;

    return 0;
}