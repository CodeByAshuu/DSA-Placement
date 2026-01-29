// 26 remove duplicate from sorted array
#include <iostream>
using namespace std;

int main(){
    int arr[] = {0,0,1,1,1,2,2,3,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    for(int j=1; j < n; j++){
        if(arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }

    for(int i = 0; i< n; i++){
        cout << arr[i] << " " ;
    }

    cout << endl <<  i + 1;

    return 0;
}