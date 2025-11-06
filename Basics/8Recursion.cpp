//RECURSION : when a function calls itself, it's called a recursion.
/*
- 'Base Case' is the condition which stops recursion.
- iteration has infinite loop & recurion has 'Stack Overflow'
*/

#include <iostream>
using namespace std;

// WAF to print sum of n natural numbers
int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

// WAF to print greeting using recursion n number of times
void greeting(int count){
    if(count == 0){
        return;
    }
    cout << "hello world" << endl;
    greeting(count - 1);
}

// WAF to write first n natural number
void naturalNum(int n){
    if(n == 0){
        return; 
    }
    cout << n << " ";
    naturalNum(n-1);
}

// WAF to print sum of n natural numbers
int sumNatural(int n){
    if(n == 0){
        return 0;
    }
    return n + sumNatural(n-1);
}

// WAF to print factorial of a number
int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n*factorial(n-1);
}

// WAF to print n terms of fibonacci series
int fibonacci(int n){
    if(n<=1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

// WAF to print sum of digit of a number
int sumOfDigit(int n){
    if(n<=9){
        return n;
    }
    return n%10 + sumOfDigit(n/10);
}

// WAF to print a^n using recursion
int power(int a, int n){
    if(n==0){
        return 1;
    }
    return a * power(a, n-1);
}

// WAF to print gcd(hcf) of two numbers
int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a%b);

}

int main() {
    int result = sum(11);
    cout << result << endl;

    greeting(4);

    int sum = sumNatural(10);
    cout << "sum : " << sum << endl;

    int res = factorial(5);
    cout << res << endl;

    int n = 7;
    // printf("hello %d", res);
    for(int i = 0; i < n; i++){
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    int sumofdigit = sumOfDigit(-1);
    cout << "sum of digit: " << sumofdigit << endl;

    int powerRes = power(2,10);
    cout << "power of a^n: " << powerRes << endl;

    cout << "GCD(24,18): " << gcd(24,18) << endl;

    return 0;
}