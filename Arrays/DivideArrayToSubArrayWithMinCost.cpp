// 3010. Divide an Array Into Subarrays With Minimum Cost I
// min cost if the 0th index element of subarray, for [1,2,3] min cost is 1.
// we have to minimize the cost by dividing the an array into 3 subarrays such that the sum of the mincost is minimum.
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
    int arr[] = {1,2,3,12};
    // int arr[] = {5,4,3};
    // int arr[] = {10,3,1,1};

    int n= sizeof(arr)/sizeof(arr[0]);
    
    int ans = INT_MAX;
    for(int i = 1; i <= n-2; i++){
        for(int j = i + 1; j <= n-1; j++){
            ans = min(ans, arr[0] + arr[i] + arr[j]);
        }
    }
    cout << ans << endl;

}