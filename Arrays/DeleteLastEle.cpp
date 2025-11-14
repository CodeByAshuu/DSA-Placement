#include <iostream>
using namespace std;

// Time Complexity : O(1)
// Space Complecity: O(1)

int main(){
    int n;
    cout << "enter number iof element:";
    cin >> n;
    int arr[n];
    for(int i =0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    n--;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}