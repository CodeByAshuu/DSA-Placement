#include <iostream>
using namespace std;

// Time complexity : O(n)
// Space Complexity: O(1)

int main(){
    int n;
    cout << "enter number of element: ";
    cin  >> n;
    int arr[n];
    for(int i =0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int pos;
    cout << "enter position to delete: ";
    cin >> pos;
    for(int i = pos-1; i < n-1; i++){
        arr[i] =arr[i+1];
    }

    n--;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }


}

// 1 2 3 4 5 6
// 0 1 2 3 4 5