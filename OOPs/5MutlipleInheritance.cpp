#include <iostream>
#include <string>
using namespace std;


/* 2. MULTIPLE INHERITANCE

a class can inherit from more than one classes.  
The constructors of inherited classes are called in the same order in which they are inherited. 
For example, in the following program, B's constructor is called before A's constructor.

A class can be derived from more than one base class.

Eg: 
(i) A CHILD class is derived from FATHER and MOTHER class
(ii) A PETROL class is derived from LIQUID and FUEL class.

Syntax:

class A
{ 
... .. ... 
};
class B
{
... .. ...
};
class C: public A,public B
{
... ... ...
};

## The destructors are called in reverse order of constructors.

THE DIAMOND PROBLEM : The diamond problem occurs when two superclasses of a class have a common base class. 
For example, in the following diagram, the TA class gets two copies of all attributes of Person class, 
this causes ambiguities.

*/

class A{
    public:
    A(){
        cout << "A's Constructor called" << endl;
    }
};

class B{
    public:
    B(){
        cout << "B's Constructor called" << endl;
    }
};


class C : public B, public A{
    public:
    C(){
        cout << "C's Constructor called" << endl;
    }
};


// problem in multiple inheritance : THE DIAMOND PROBLEM


// class Person {
//    // Data members of person 
// public:
//     Person(int x)  { cout << "Person::Person(int ) called" << endl;   }
// };

// class Faculty : public Person {
//    // data members of Faculty
// public:
//     Faculty(int x):Person(x)   {
//        cout<<"Faculty::Faculty(int ) called"<< endl;
//     }
// };

// class Student : public Person {
//    // data members of Student
// public:
//     Student(int x):Person(x) {
//         cout<<"Student::Student(int ) called"<< endl;
//     }
// };

// class TA : public Faculty, public Student  {
// public:
//     TA(int x):Student(x), Faculty(x)   {
//         cout<<"TA::TA(int ) called"<< endl;
//     }
// };

/*In the above program, constructor of 'Person' is called two times. 
Destructor of 'Person' will also be called two times when object 'ta1' is destructed. 
So object 'ta1' has two copies of all members of 'Person', this causes ambiguities. 
The solution to this problem is 'virtual' keyword. 
We make the classes 'Faculty' and 'Student' as virtual base classes to avoid two copies 
of 'Person' in 'TA' class.*/


//  DIMAOND PROBLEM FIXED USING 'VIRTUAL' KEYWORD
class Person {
public:
    Person(int x)  { cout << "Person::Person(int ) called" << endl;   }
    Person()     { cout << "Person::Person() called" << endl;   }
};

class Faculty : virtual public Person {
public:
    Faculty(int x):Person(x)   {
       cout<<"Faculty::Faculty(int ) called"<< endl;
    }
};

class Student : virtual public Person {
public:
    Student(int x):Person(x) {
        cout<<"Student::Student(int ) called"<< endl;
    }
};

class TA : public Faculty, public Student  {
public:
    TA(int x):Student(x), Faculty(x)   {
        cout<<"TA::TA(int ) called"<< endl;
    }
};

// In the above program, constructor of 'Person' is called once. 
// One important thing to note in the above output is, the default constructor of 'Person' is called. 
// When we use 'virtual' keyword, the default constructor of grandparent class is called by default even 
// if the parent classes explicitly call parameterized constructor.

int main(){

    // Mutliple Inheritance
    A a;
    B b;
    C c;

    // The diamond problem : ambiguity
    TA T(30);

    return 0;
}