// WAP for binary search

#include <iostream>
using namespace std;

// Time Complexity : O(1) [when value at mid]
// Time Complexity : O(log n) [when value at any other index]
// Space Complexity: O(1)

int main(){
    int n, value;
    cout << "enter number of elements and value to search : ";
    cin >> n >> value;
    int arr[n];
    for(int i =0; i < n; i++){
        cin >> arr[i];
    }

    for(int i =0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int start=0 , end=n-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == value){
            cout << "Found " << value << " at index : " << mid;
            break;
        }else if(arr[mid] > value){     // mtlb value agar mid ke left side ho toh end ko mid pe lejao
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return 0;


}