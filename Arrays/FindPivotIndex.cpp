#include <iostream>
#include <algorithm>
using namespace std;


// Time complexity : O(n²)


int main(){
    int arr[] = {1, 7, 3, 6, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n-1; i++){
        int rightSum = 0;
        int leftSum = 0;

        for(int j = 0; j < i; j++){
            leftSum += arr[j];
        }
        for(int j = i+1; j < n; j++){
            rightSum += arr[j];
        }

        if(rightSum == leftSum){
            cout << "Pivot Index: " << i << endl;
            return 0;
        }
    }

    cout << "No Pivot Index Found" << endl;
}


// there can be multiple pivot indexes
// example : arr = [1, -1, 1, -1, 1, -1]
//  example : arr = [0, 0, 0, 0]


// optimized
/*
#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 7, 3, 6, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int totalSum = 0;
    for(int i = 0; i < n; i++){
        totalSum += arr[i];
    }

    int leftSum = 0;

    for(int i = 0; i < n; i++){
        int rightSum = totalSum - leftSum - arr[i];

        if(leftSum == rightSum){
            cout << "Pivot Index: " << i << endl;
            return 0;
        }

        leftSum += arr[i];
    }

    cout << "No pivot index found";
}
*/