#include <iostream>
using namespace std;

// 875 Koko Eating Bananas

bool canEat(int n, int hours){
    if(n <= hours ) {
        return true;
    }
    return false;
}

int main(){
    // int arr[] = {3, 6, 7, 11};
    // int h = 8;  //output :4

    // int arr[] = {30, 11, 23, 4, 20};
    // int h = 5; //output: 30

    int arr[] = {30, 11, 23, 4, 20 };
    int h = 6; //output: 23

    int n = sizeof(arr)/sizeof(arr[0]);
    int kMin = 1;
    int maximum = arr[0];
    int sum = 0;

    for (int i = 0; i < n; i++){
        sum += arr[i];
        maximum = max(maximum, arr[i]);
    }
    
    for(int i = 0; i < n; i++){
        if(h <= sum/kMin && kMin <= maximum){
            kMin++;
        }else{
            cout << kMin << endl;
        }
    }


    // int start = 0, end = 0;
    // while(start <= end){
    //     int mid = start + (end - start)/2;
    //     if(canEat(arr[i], kMin)){
    //         start++;
    //     }
    // }

    // if(arr[i] < kMIN)
    
}

