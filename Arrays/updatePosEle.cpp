#include <iostream>
using namespace std;

// Time Complexity : O(n)
// Space Complexity: O(n)

int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i <n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int num, pos;
    cin >> num >> pos;
    arr[pos-1] = num;
    for(int i = 0; i <n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}