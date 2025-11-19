/* 4. HEIRARCHICAL INHERITANCE

more than one sub-class inherits the property of a single base class. 
There is one base class and multiple derived classes. 
Several other classes inherit the derived classes as well. 
Hierarchical structures thus form a tree-like structure. 
It is similar to that, mango and apple both are fruits; both inherit the property of fruit. 
Fruit will be the Base class, and mango and apple are sub-classes. 


Syntax:

Class A  
{  
   ............  
};  
Class B: access_specifier A  
{  
   .........  
};  
Class C: access_specifier A 
{  
  ............. 
};  

*/

#include<iostream>
using namespace std;

class A   //superclass A
{
  public:
  void show_A() {
    cout<<"class A"<<endl;
  }
};
class B : public A   //subclass B
{
  public:
  void show_B() {
    cout<<"class B"<<endl;
  }
};

class C : public A   //subclass C
{
  public:
  void show_C() {
    cout<<"class C"<<endl;
  }
};


// Base class
class shape {
public:
    string name;
    int sides;

    shape(string name, int sides) // constructor
    {
        this->name = name; // this pointer
        this->sides = sides;
    }
};

// Derived class
class triangle : public shape {

    private:
        int base;
        int height;

    public:
    // shape constructor taking arguments from triangle constructor
    triangle(string name, int sides, int base, int height) : shape(name, sides){
        this->base = base;
        this->height = height;
    }

    void area(){
        cout << "area of triangle: " << (0.5 * base * height) << endl;
    }
    void details(){
        cout << "shape is: " << name << endl;
        cout << "no. of sides are: " << sides << endl;
        cout << "base is: " << base << endl;
        cout << "height is: " << height << endl;
        area(); // calling area()
    }
};

// Derived class
class square : public shape {
    private:
        int height;

    public:
    // shape constructor taking arguments
    // from square constructor
    square(string name, int sides, int height) : shape(name, sides){
        this->height = height;
    }

    void area(){
        cout << "area of square: " << (height * height)<< endl;
    }

    void details(){
        cout << "shape is: " << name << endl;
        cout << "no. of sides are: " << sides << endl;
        cout << "height is: " << height << endl;
        area(); // calling area()
    }
};

int main() {
    B b;  // b is object of class B
    cout<<"calling from B: "<<endl;
    b.show_B();
    b.show_A();
    
    C c;  // c is object of class C
    cout<<"calling from C: "<<endl;
    c.show_C();
    c.show_A();

    // Creating objects
    triangle t("triangle", 3, 2, 3);
    square s("square", 4, 2);

    t.details();
    cout << endl << endl;

    s.details();

  return 0;
}
