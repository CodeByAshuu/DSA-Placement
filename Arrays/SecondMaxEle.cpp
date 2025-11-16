#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cout << "enter a num of elements: ";
    cin >> n;
    int arr[n];
    int max = INT_MIN;
    int secmax = INT_MIN;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] > max ){
            max = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<max && arr[i] > secmax){
            secmax =arr[i];
        }
    }
    cout << "max: " << max << " second max: " << secmax <<endl;
    return 0;
}