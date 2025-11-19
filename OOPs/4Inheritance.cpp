/*                                          - - - INHERITANCE - - -

It is the mechanism by which one class is allowed to inherit the features (fields and methods) of 
another class. 
Inheritance means creating new classes based on existing ones. 
A class that inherits from another class can reuse the methods and fields of that class.




*/

#include <iostream>
#include <string>
using namespace std;

class Animal{
    public:
    void sound(){
        cout << "I am an animal, animal makes sound" << endl;
    }
};

class Dog : public Animal {
    public:
    void sound(){
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
    public:
    void sound(){
        cout << "Cat meows" << endl;
    }
};

/* TYPE OF INHERITANCE

1. SINGLE INHERITANCE

a sub-class is derived from only one super class. 
It inherits the properties and behavior of a single-parent class. 
Sometimes, it is also known as simple inheritance.




*/

class Vehicle{
    public:
    Vehicle(){
        cout << "Vehicle is starting " << endl;
    }
};

class Car : public Vehicle{
    public:
    Car(){
        cout << "Car is starting" << endl;
    }
};

int main(){
    Animal ghoda;
    ghoda.sound();

    Dog Taisu;
    Taisu.sound();

    Cat ginger;
    ginger.sound();

    // Single Inheritance
    Vehicle Gadi;
    Car BMW;
    return 0;
}