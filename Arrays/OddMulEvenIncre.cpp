#include <iostream>
using namespace std;

// value even , then increment by 1, value odd , multiply by 2.

int main(){
    int n;
    cout << "enter number of ele: ";
    cin >> n;
    int arr[n];
    for(int i=0; i <n; i++){
        cin >> arr[i];

        if(arr[i]%2 ==0){
            arr[i] = 1 + arr[i];
        }else{
            arr[i] = 2 * arr[i];
        }
    }
    for(int i =0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}