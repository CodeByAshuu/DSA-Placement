#include <iostream>
using namespace std;

// left rotate (piche dalo) k times 
// n = 7, k = 2
// 1 2 3 4 5 6 7
// 3 4 5 6 7 1 2

void reverseArr(int arr[], int st, int end) {
    while(st < end){
        swap(arr[st], arr[end]);
        st++;
        end--;
    }
}

void rotateLeft(int arr[], int n, int k) {
    k %= n;

    reverseArr(arr, 0, k-1);
    reverseArr(arr, k, n-1);
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

    rotateLeft(arr, n, k);

    printArray(arr,n);
    return 0;
}
