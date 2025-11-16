#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cout << "enter a num of elements: ";
    cin >> n;
    int arr[n];
    int max= INT_MIN;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << "max : " << max  <<endl;
    return 0;
}