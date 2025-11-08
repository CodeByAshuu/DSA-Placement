#include <cmath>
#include <iostream>
using namespace std;

int main(){

    cout << "fmax(10,20) : " << max(10,20) << endl;
    cout << "fmin(10,20) : " << min(10,20) << endl;

    cout << "pow(2,3) : " << pow(2,3) << endl;

    cout << "abs(-5) : " << abs(-5) << endl;
    cout << "abs(5) : " << abs(5) << endl;

    cout << "sqrt(25) : " << sqrt(25) << endl;
    cout << "cbrt(27) : " << cbrt(27) << endl;
    
    cout << "ceil(3.1) : " << ceil(3.1) << endl;
    cout << "ceil(3.9) : " << ceil(3.1) << endl;

    cout << "floor(3.1) : " << floor(3.1) << endl;
    cout << "floor(3.9) : " << floor(3.9) << endl;

    cout << "round(2.5) : " << round(2.5) << endl;
    cout << "round(4.6) : " << round(4.6) << endl;
    cout << "round(6.3) : " << round(6.3) << endl;

    cout << "log(2.71828) : " << log(2.71828) << endl;
    cout << "log10(100) : " << log10(100) << endl;

    cout << "exp(2.71828) : " << exp(2.71828) << endl;
    cout << "hypot(3,4) : " << hypot(3,4) << endl;
    cout << "hypot(5,12) : " << hypot(5,12) << endl;

    cout << "sin(3.14159/2) : " << sin(3.14159/2) << endl;
    cout << "cos(0) : " << cos(0) << endl;
    cout << "tan(0) : " << tan(0) << endl;

    // int radius;
    // cout << "Enter radius of circle: ";
    // cin >> radius ;
    // cout << "Area of circle : " << 3.14159 * pow(radius,2) << endl;


    // int base, height;
    // cout << "Enter base and height of a right angled triangle : ";
    // cin >> base >> height;
    // cout << "Hypotenus of triangle : " << hypot(base,height) << endl;
    // cout << "Area of triangle : " << base * height * 0.5 << endl;

    int perfectSquare;
    cout << "Enter a number to check isf it is a perfect sqaure or not : " ;
    cin >> perfectSquare;
    if(floor(sqrt(perfectSquare)) == sqrt(perfectSquare)){
        cout << perfectSquare << " is a perfect sqaure" << endl;
    }else{
        cout << perfectSquare << " is not a perfect sqaure" << endl;

    }

    int x1,y1,x2,y2;
    cout << "Enter points (x1,y1) & (x2,y2) : ";
    cin >> x1 >> y1 >> x2 >> y2;
    float distance = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    cout << "Distance between points (x1,y1) & (x2,y2) : " << distance << endl; 
    return 0;

}