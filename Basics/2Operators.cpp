/*
                                - - - OPERATORS - - -

A. Unary Operators (single operand)
++ : increment
-- : decrement


B. Arithmetic Operators
+ : addition
- : subtraction
* : multiplication
/ : division
% : modulus (remainder)
** : exponentiation


C. Assignment Operators
= : assignment
+= : addition assignment
-= : subtraction assignment
*= : multiplication assignment
/= : division assignment
%= : modulus assignment


D. Comparison/Relational Operators
== : equal to
!= : not equal to
> : greater than
< : less than
>= : greater than or equal to
<= : less than or equal to


E. Logical Operators
&& : logical and
|| : logical or
! : logical not


F. Bitwise Operators
& : bitwise and
| : bitwise or
~ : bitwise not (15 = 0000 1111), ~a = 1111 0000
<< : shift left (15 = 0000 1111), a<<3 = 0111 1000
>> : shift right (15= 0000 1111), a>>2 = 0000 0011


G. Ternary Operator 
?: : condition? expression1 : expression2

Other Operators in C++
sizeof : size of a variable
* : pointer to a variable
& : address of
, : comma operator

*/

#include <iostream>
using namespace std;

int main(){
    int a = 15;
    int b = 20;

    //arithmatic
    cout << "Sum : " << a+b << endl;
    cout << "subtraction : "<< a-b << endl;
    cout << "multiplication : " << a*b << endl;
    cout << "divide : " << a/b << endl;
    cout << "remainder : " << a%b << endl;
    cout << "++a = " << ++a << endl;    //pehle increment fir print
    cout << "a++ = " << a++ << endl;    //pehle print fir increment
    cout << "b-- = " << b-- << endl;
    cout << "--b = " << --b << endl;

    //relational  : gives 0(false) / 1 (true)
    int p = 6, q = 4;
    cout << "p == q is " << (p == q) << endl;
    cout << "p > q is " << (p > q) << endl;
    cout << "p >= q is " << (p >= q) << endl;
    cout << "p < q is " << (p < q) << endl;
    cout << "p <= q is " << (p <= q) << endl;
    cout << "p != q is " << (p != q);

    //logical operator
    int x = 6 , y = 6;
    cout << "x && y : " << (x && y) << endl;
    cout << "x || y : " << (x || y) << endl;
    cout << "!y is : " << (!b) << endl;

    //bitwise operator
    int s = 6, t = 4;
    cout << "s & t : " << (s & t) << endl;
    cout << "s | t : " << (s | t) << endl;
    cout << "s ^ t : " << (s ^ t) << endl;
    cout << "s >> t : " << (s >> t) << endl; //left shift
    cout << "s << t : " << (s << t) << endl;
    cout << "~(a) is : " << (~a) << endl;   //one's compliment operator

    //assignment operator
    int c = 6, d = 4;
    cout << "c = " << c << endl;
    cout << "c += d : " << (c+=d) << endl;
    cout << "c -= d : " << (c-=d) << endl;
    cout << "c *= d : " << (c*=d) << endl;
    cout << "c /= d : " << (c/=d) << endl;

    //ternary 
    int result = (c < d) ? d : c;
    cout << "The greatest number is " << result << endl;

    //sizeof
    cout << "size of char : " << sizeof(char) << endl;
    cout << "size of int d : " << sizeof(d) << endl;

    //comma
    // int n = (d+1,d-1,d*2);
    cout << "value of d : " << d << endl;
    // int j, k, l;

    //addressOf (&) :  used to find the memory address in which a particular variable is stored. 
    cout << "address of d : " << &d << endl; 

    //dot (.) : used to access members of structure variables or class objects using their object names.

    //arrow operator : used to access the variables of classes or structures through its pointer.

    //casting :  used to convert the value of one data type to another data type.
    // (float)x;
    
    // int e = 5;
    // cout << (e++) * (++e) << endl;  // 5 * 7


    return 0;
}

/*

PRECEDENCE OF OPERATOR IN C++
1. Parenthesis ()
2. Exponentiation (**)
3. Multiplication (*), Division (/), Modulus (%)
4. Addition (+), Subtraction (-)
5. Bitwise AND (&)
6. Bitwise OR (|)
7. Bitwise XOR (^)
8. Bitwise NOT (~)
9. Logical NOT (!)
10. Equality (==), Inequality (!=)
11. Greater than (>)
12. Less than (<)
13. Greater than or equal to (>=)
14. Less than or equal to (<=)
15. Assignment (=, +=, -=, *=, /=, %=, ^=, !=, <<=, >>=)
16. Comma (,)

*/

/* OPERATOR ASSOCIATIVITY 

Operator associativity determines the order in which operands are grouped when multiple operators have 
the same precedence. There are two types of associativity:

1. LEFT TO RIGHT :
- multiple same precedence operators
- ex :  a + b - c

2. RIGHT TO LEFT :
- evalulated from right to left
- "=" operator 
- ex: a = b = 4 ; 4 is assigned to b , then , b is assigned to a.

*/
