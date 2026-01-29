// 1011 Capacity to ship packages within D days.
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,,7,8,9,10};
    int days = 5;

    int n = sizeof(arr)/sizeof(arr[0]);
    int maxCap = 0;
    int minCap = arr[0];
    for(int weight = 0; weight < n; weight++){
        if(weight > minCap){
            minCap = weight;
        }
        maxCap += weight;
    }


    return 0;
}