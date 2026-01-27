#include <iostream>
using namespace std;

// Time Complexity : O(n*length of digits);


int digit(int n){
    int digitCount = 0;
    while(n > 0){
        n = n / 10;
        digitCount++;
    }
    return digitCount;
}

int main(){
    int arr[] = {92, 31, 8 , 789, 2345, 45678, 0, 123};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int even = 0;
    for(int i=0; i<n; i++){
        int NumOfDigit = digit(arr[i]);
        if(NumOfDigit % 2 == 0){
            even++;
        }
    }
    cout << "Count : " << even;
    return 0;
}   