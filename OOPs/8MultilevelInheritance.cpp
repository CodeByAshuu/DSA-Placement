/*
3. MULTILEVEL INHERITANCE

One class inherits another class, which in turn is derived from another class. 
It is known as multi-level inheritance as there are more than one level of inheritance.

For example, if we take Grandfather as a base class then Father is the derived class that has features 
of Grandfather and then Child is the also derived class that is derived from the sub-class Father 
which inherits all the features of Father.

SYNTAX:
// Base class
class A {
    // Class A body
};

// Derived class
class B : access_specifier A {
    // Class B body
} ;

// Derived from derived class B
class C : access_specifier B {
    // Class C body
} ;

SCOPE RESOLUTION OPERATOR!!

:: is the scope resolution operator in C++.

What it does?
- It tells the compiler which class or scope a function or variable belongs to.
- Normally, obj.f() and obj.g() would work because Child inherits everything.

But :: is used when:
- You want to specify exactly which class’s function to call. (Useful in case of function overriding).
- Accessing global variables when local ones have the same name.

*/

#include <iostream>
#include <string>
using namespace std;


// Example 1: Transitive Nature
// The most derived class inherits all the features of all the classes in the hierarchy, but whether they are accessible depends on the access specifier.
// making the base classes private will give error

class Grandfather{
    public:
    void g() {
        cout << "This is a Grandfather class" << endl;
    }
    
    // example 2:  constructor destructor
    Grandfather() {
        cout << "This is a Grandfather class"<< endl;
    }
    ~Grandfather() {
        cout << "Grandfather class destroyed" << endl;
    }
    
};

class Father : public Grandfather {
    public:
    void f() {
        cout << "This is Father class" << endl;
    }

    // example 2:  constructor destructor
    Father() {
        cout << "This is Father class"<< endl;
    }
    ~Father() {
        cout << "Father class destroyed" << endl;
    }
};

class Child : public Father {
    public:
    void c() {
        cout << "This is Son class" << endl;
    }

    // example 2:  constructor destructor
    Child() {
        cout << "This is Child class" << endl;
    }
    ~Child() {
        cout << "Child class destroyed" << endl;
    }
};


// Example 2: Constructor and Destructor Order
// As all the classes are inherited, constructor for these classes is called when the object of the most 
// derived class is created. The order remains from the top to bottom, means from least derived to most derived. The order of destructor is reverse of it.


int main() {
    
    // Creating object of Child class
    Child obj;
    
    // Calling member methods of all classes using Child object
    obj.c();
    obj.Father::f();    //obj.f() will also work
    obj.Father::Grandfather::g();   // obj.g() will also work
    return 0;
}