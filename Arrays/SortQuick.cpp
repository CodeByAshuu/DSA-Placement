#include <iostream>
#include <vector>
using namespace std;

// TIME COMPLEXITY : O(nlogn) [average, practical]
//                 : O(n²) [worst case] (when pivot repeatidely is either smallest/largest element)
// SPACE COMPLEXITY : O(1)

int partition(vector<int> &arr, int st, int end){
    int idx = st-1;             //idx is -1 
    int pivot = arr[end];       //pivot is last element
    for(int j = st; j < end; j++){
        if(arr[j] <= pivot){            //if element at j is <= pivot element
            idx++;                      //move idx one step ahead
            swap(arr[j], arr[idx]);     // and swap element at j with element at idx
        }
    }
    // whole arr is traveres upto the pivot element now
    idx++;                              // idx is incremented 
    swap(arr[idx], arr[end]);           //pivot element is swapped to element at idx
    return idx;                         //pivot element idx is now returned 
}


void quickSort(vector<int> &arr, int st, int end){
    if(st < end){
        int pivotIdx = partition(arr, st, end); //returns index of pivot element
        quickSort(arr, st, pivotIdx-1);     //left hand
        quickSort(arr, pivotIdx+1, end);   // right hand
    }
}


int main(){
    vector<int> arr = {12, 31, 35, 8, 32, 17};
    cout << "Before: ";
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;

    quickSort(arr, 0, arr.size()-1);
    cout << "After: ";
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}