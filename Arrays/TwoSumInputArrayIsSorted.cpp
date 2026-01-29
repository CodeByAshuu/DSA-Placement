#include <iostream>
using namespace std;

// Leetcode : 167
// two pointer, not binary search
// Time Complexity : O(logn)

int main(){
    int arr[] = {2, 7, 11, 15};
    int target = 9;
    int n  = sizeof(arr)/sizeof(arr[0]);
    int start = 0, end = n-1;
    while (start <= end){
        if(arr[start] + arr[end] == target){
            cout << start << " " << end << endl;
            return 0;
        } else if(arr[start] + arr[end] > target){
            end--;
        }else{
            start++;
        }
    }
    return 0;
}

// Binary Search: nlogn 
// int main(){
//     int arr[] = {2, 7, 11, 15};
//     int target = 9;
//     int n  = sizeof(arr)/sizeof(arr[0]);
//     int start = 0, end = n-1;
//     int mid = (start + end)/2;


//     for(int i = 0; i < n; i++){
//         int num1 = arr[i];
//         int num2 = target - arr[i];
//         for(int j = i; j < n; j++){
//             // int index2 = bianrySearch(arr, i + 1, num2);
//         }
//     }
//     while (start <= end){
//         if(arr[mid] == target){
//             cout << mid << endl;
//             return 0;
//         } else if(arr[mid] > target){
//             end = mid -1 ;
//         }else{
//             start = mid + 1;
//         }
//     }
//     return 0;
// }

