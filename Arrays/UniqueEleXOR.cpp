#include <iostream>
using namespace std;

// Time Complexity : O(n)
// Space Complexity: O(1)

int main(){
    int n;
    cout << "enter number of elements to enter in array: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>> arr[i];
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int ans=0;
    for(int i =0; i<n; i++){
        ans ^= arr[i];
    }

    cout << "unique element: " << ans ;
    return 0;
}