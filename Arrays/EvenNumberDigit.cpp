#include <iostream>
using namespace std;

int digit(int n){
    int digitCount = 0;
    while(n > 0){
        n = n / 10;
        digitCount++;
    }
    return digitCount;
}


// while(n<0){
    // n/=10; //92/10 = 9
    // count++; //--> 1
    // 9/10 => 0;
    // count++ => 2
// }

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