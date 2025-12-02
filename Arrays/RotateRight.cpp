#include <iostream>
using namespace std;

// piche ke aage krna k times
void reverseArr(int arr[], int st, int end){
    while(st < end){
        swap(arr[st], arr[end]);
        st++;
        end--;
    }
}

void rotateRight(int arr[], int n , int k){
    k %= n;
    if(k == 0) return;
    reverseArr(arr, n-k, n-1);
    reverseArr(arr, 0, n-k-1);
    reverseArr(arr, 0, n-1);

}

void printArray(int arr[], int n){
    for(int i=0; i< n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n, k;
    cout << "enter number of elements and times to rotate: ";
    cin >> n >> k;

    int arr[n];   // works in GCC

    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }

    printArray(arr, n);
    rotateRight(arr, n, k);
    printArray(arr,n);
    return 0;
}