// 643 maximum average subarray
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {1,12, -5, -6, 50, 3};
    int k = 4;
    double maxSum = 0;
    int n  = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i < k; i++){
        maxSum += arr[i];
    }
    cout << "sum: " <<  maxSum << endl;
    
    for(int i=k; i<n; i++){
        double current = maxSum + arr[i] - arr[i-k];
        maxSum = max(current, maxSum);
    }
    cout << maxSum << endl;
    cout << "average: " <<  maxSum/k;
}