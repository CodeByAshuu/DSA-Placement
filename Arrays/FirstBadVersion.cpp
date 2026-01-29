// 278
#include <iostream>
using namespace std;

// linear : O(n)
// TLE
int main(){
    int arr[] = {1,2,3,4,5};
    int bad = 4;
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n; i++){
        if(isBadVersion(i)){
            return arr[i];
        }
    }
    return -1;
}



// binary
int main(){
    int start = 0, end = 0;
    int bad = -1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(isBadVersion(mid)){
            start = mid + 1;
        }else{
            bad = mid;
            end = mid - 1;
        }
    }
    return bad;
}