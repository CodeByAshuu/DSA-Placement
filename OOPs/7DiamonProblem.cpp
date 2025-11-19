#include<iostream>
using namespace std;

class A
{
  int x;
public:
  A(int i) { x = i; }
  void print() { cout << x; }
};

class B: virtual public A
{
public:
  B():A(10) {  }
};

class C:  virtual public A 
{
public:
  C():A(10) {  }
};

class D: public B, public C {
};

int main()
{
    // D d;
    // d.print();
    return 0;
}

// Compile-time error
// Reason for Error: Missing Base Class Constructor Call
// the error occurs because, when using virtual inheritance, the most-derived class (in this case, class D) 
// is responsible for directly calling the constructor of the virtual base class (class A).