#include <iostream>
using namespace std;

// Time complexity : O(N)
// Space complexity: O(1)

int main(){
    int n;
    cout << "Enter th eumber of element: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n ; i++){
        cin >> arr[i] ;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    for(int i = 0; i < n-1; i ++){
        arr[i] = arr[i+1];  
    }
    n--;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
