//WAP to print the unique element where other elements are repeated

// Time Compelxity : O(n²)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter num of elements to enter: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i< n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    for(int i = 0; i < n; i++){
        bool isUnique = true;
        for(int j=0; j < n; j++){
            if(i!=j && arr[i] == arr[j]){
                isUnique = false;
                break;
            }
        }
        if(isUnique){
            cout << arr[i] << " is unique" << endl;
        }
    }

    return 0;
}