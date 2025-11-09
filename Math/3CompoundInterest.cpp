// WAF to print the compound intererst


#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float P, r, n, t;
    cout << "Enter the principle amount: ";
    cin >> P;
    cout << "Enter the annual interest rate: ";
    cin >> r;
    cout << "Enter the times of interest compounded: ";
    cin >> n;
    cout << "Enter the number of years: ";
    cin >> t;

    int A = P * pow(1 + r / n,n * t);
    cout << "Amount : " << A << endl;

    return 0;
}