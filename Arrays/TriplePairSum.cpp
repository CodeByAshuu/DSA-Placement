#include <iostream>
using namespace std;

// Time Complexity : O(n3)
// Space Complexity: O(1)

int main(){
    int n, value;
    cout << "enter number of elements and value to search: ";
    cin  >> n >> value;
    int arr[n];
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i< n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i =0; i<n-1; i++){
        for(int j =i+1; j<n; j++){
            if(arr[i]+arr[j] == value){
                // cout << arr[i] << " + " << arr[j] << " = " << value <<endl;
                cout << "[" << i << ", " << j << "]" <<endl;
            } 
        }
    }
    return 0;
}