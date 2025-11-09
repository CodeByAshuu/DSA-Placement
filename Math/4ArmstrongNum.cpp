// WAP to check if a number is armstrong or not

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num, digits;
    int sum = 0;
    cout << "enter a num: ";
    cin >> num;
    int n = num;
    while(n>0){
        digits = n%10;
        sum += round(pow(digits, 3));
        n /= 10;
    }

    if(num == sum){
        cout << "armstrong number" << endl;
    }else {
        cout << "not a armstrong number" << endl;
    }
}
// 153 
// dig 3 , n 15