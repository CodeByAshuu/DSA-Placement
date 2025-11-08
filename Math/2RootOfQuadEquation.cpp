// WAF to find roots of a quadratic equation
// ax^2 + bx + c = 0
// d =  b^2 - 4ac
// (-b + sqrt(d)) / 2a

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    float a, b, c, d;
    cin >> a >> b >> c;
    d = pow(b,2) - (4*a*c);
    cout << "D : " << d << endl;
    float root1 = (-b + sqrt(d)) / (2*a);
    float root2 = (-b - sqrt(d)) / (2*a);
    cout << "Root 1 : " << root1 << " | Root 2 : " << root2 << endl;
}

// sample input : 2 5 -3
