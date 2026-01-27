#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int currentSum = 0;
    int maxSum = arr[0];

    for(int right = 0; right < n ; right++){
        currentSum+=arr[right];
        maxSum = max(currentSum, maxSum);
        if(currentSum < 0){
            currentSum = 0;
        }
    }
    cout << "MaxSum: " << maxSum << endl;
}
// output: 6;

// 1004