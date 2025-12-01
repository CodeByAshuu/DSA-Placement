#include <iostream>
using namespace std;

// Time Complexity : O(n)
// Space Complexity: O(n) (array storage)

// Linear search Time complexity when 
// element at 0 index : O(1)
// element at mid index : O(n)
// element at last index: O(n)

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

    int value;
    cout << "enter value to search for in the array: ";
    cin >> value;
    bool found = false;;
    for(int i =0; i<n; i++){
        if(arr[i] == value){
            cout << value << " at index " << i<< " & position " << i+1<<endl;\
            found = true;
            break;
        }
    }

    if(!found){
        cout << value << " not in the array.";
    }

    return 0;
}