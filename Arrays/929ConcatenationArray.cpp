#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 2 * (sizeof(arr)/sizeof(arr[0]));
    int concatArr[n];
    for(int i= 0; i < n; i++){
        concatArr[j] = arr[i];
    }

    for(int i = 0; i < n; i++){
        cout << concatArr[i] << " ";
    }

    return 0;
}

// 1 2 3 4 5
// output : 1 2 3 4 5 1 2 3 4 5