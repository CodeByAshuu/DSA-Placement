#include <iostream>
#include <vector>
using namespace std;

// TIME COMPLEXITY : total calls x Work Done in each call
//                  = logn x n
//                  = O(nlogn)
// SPACE COMPLEXITY : O(n)

void merge(vector<int> &arr, int st, int mid, int end){
    vector<int> temp;
    int i = st, j = mid + 1;

    // merge both array
    while( i <= mid && j <= end ){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    // leftover left hand
    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }
    
    // leftover right hand
    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx = 0; idx< (int)temp.size(); idx++){
        arr[idx+st] = temp[idx];
    }
}

void mergeSort(vector<int> &arr, int st, int end){
    if(st < end){
        int mid = st + (end-st)/2;
        mergeSort(arr, st, mid);        // left part
        mergeSort(arr, mid+1, end);     // right left

        merge(arr, st, mid, end);
    }

}

int main(){
    vector<int> arr = {12, 31, 35, 8, 17 , 32};
    cout << "Before: ";
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;

    mergeSort(arr,0, arr.size()-1);
    cout << "After: ";
    for(int i : arr){
        cout << i << " ";
    }
    return 0;

}