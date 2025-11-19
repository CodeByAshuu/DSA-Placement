/*                                - - - OBJECT ORIENTED PROGRAMMING - - -

- Encapsulation (hiding internal details)
- Inheritance (reusing code from parent classes) : to inherit something from ancestors
- Polymorphism (ability for objects to take many forms)
- Examples: Python, Ruby, Swift,C++
- Class

OBJECTs are real world entities
CLASSES are like blueprint of these entities (iss blueprint se objects bnega)
    - eg: Toyota uses a BluePrint(Class) to create a multiple cars(Objects)
    - eg: System create a teacher(object) and he/she has different properties(i.e name,subject,dept,salary) of his/her own. and some funnction like "change dept"(methods).
    
METHOD are function created inside a class

A. CLASS
- Class is a blueprint or template for creating objects
- Class is a collection of variables and methods
- Class is a user defined data type
- it holds its own data members and member functions, which can be accessed and used by creating an instance of that class.
# Data members are the data variables
# Member functions are the functions that can be used to perform operations on data members.

Syntax:
class class_name{
    access specifier;          //can be private, public or protected
    data members;               // variables to be used
    member functions();         // methods to access data members
};

accessing data members
- data members can be accessed using the object name and dot operator.
- e.g., objName.MemberFunction()

                                        - - - Access Modifiers - - -

- Access modifiers are used to restrict the access of class members.

- There are three types of access modifiers in C++: public, private, and protected.
- Public members can be accessed from anywhere in the program.
- Private members can only be accessed within the class itself.
- Protected members can be accessed within the class itself and by derived classes.
 
#By default everything is PRIVATE in class.



*/

#include <iostream>
#include <string>
using namespace std;

class Dog{
    string breed, color;
    int age, size;
    bark(), eat(), sleep();
};


// class declaration
class Teacher{
    private:
        double salary;

    public:
        string name;
        string dept;
        string subject;
    
    // methods //Member function
    void changeDept(string newDept){
        dept = newDept;
    }

    // setter
    void setSalary(double sal){
        salary = sal;
    }

    // getter
    double GetSalary(){
        return salary;
    }
};

int main() {
    // creating object
    Teacher T1;
    Teacher T2;
    Teacher T3;

    //accessing object properties
    T1.name = "Nitish Kumar";
    T1.dept = "CSE";
    T1.subject = "C++";

    cout << T1.name << endl;
    cout << T1.dept << endl;
    cout << T1.subject << endl;

    T1.setSalary(25000);
    // accessing private properties;
    cout << T1.GetSalary() << endl;
    return 0;
}