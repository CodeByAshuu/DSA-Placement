#include<iostream>
using namespace std;

class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};

class B:  public A
{
public:
  B()  { setX(10); }
};

class C:  public A  
{
public:
  C()  { setX(20); }
};

class D: public B, public C {
};

int main()
{
    D d;
    // d.print();
    return 0;
}

// Compile-time error
// This code will NOT compile.
// Reason: Ambiguity due to diamond inheritance.

// Why?
// D inherits from both B and C, and both of these inherit from A.

// So inside D, you actually have two separate A subobjects:
// One A coming from B
// One A coming from C

// Compiler gets confused:
// ➡️ Which print() to call?
// B::A::print() or C::A::print()?