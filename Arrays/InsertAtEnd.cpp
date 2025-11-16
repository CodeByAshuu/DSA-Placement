#include <iostream>
using namespace std;

// Time Complexity : O(1)
// Space Compelxity: O(1)

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
    int value;
    cout << "enter value to enter at the end of the array: ";
    cin >> value;
    arr[n-1]=value;
    for(int i =0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}