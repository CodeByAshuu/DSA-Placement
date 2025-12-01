#include <iostream>
using namespace std;

// Time Complexity : O(n²) [worst case, average case]
// Time Complexity : O(n) [best case] (when array is already sorted);
// Space Complexity: O(1)


int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i =0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i = 0; i< n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]> arr[j+1]){
                // int temp = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;
                swap(arr[j+1], arr[j]);
            }
        }
    }

    for(int i =0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
}