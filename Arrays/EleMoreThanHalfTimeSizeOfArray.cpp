#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {7, 3, 3, 3, 1, 3, 9, 6};
    int n = sizeof(arr)/ sizeof(arr[0]);
    
    sort(arr, arr + n);
    int ele;
    int max = 0;
    for(int i = 0; i < n; i++){
        int frequency = count(arr,arr+n, arr[i]);
        if(frequency > max){
            max = frequency;
            ele = arr[i];
        }
        if(frequency >= n/2){
            cout << ele ;
            break;
        }
    }

    return 0;
}

// Time Complexity : O(n)
// Space Complexity : O(1)