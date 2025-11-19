/*                                          - - - CONSTRUCTOR - - -

- A constructor in C++ is a special method that is automatically called when an object of a class is created.
- used for initialization
- same name as class
- dont have a return type
- used to initialize the data members of the class
- can be overloaded
- only called once (object initialisation)
- memory allocation happens when constructor is called;

- can be used to perform some operation when an object is created
- can be used to perform some operation when an object is destroyed


Type of constructor
1. Default constructor
2. Parameterized constructor
3. Copy constructor
4. Move constructor
5. Destructor

# Copy Constructor
- A copy constructor is a special constructor that is used to create a copy of an existing object.
- It is called when an object is created from another object of the same class.
- It is used to copy the data members of the existing object to the new object.
- It is used to create a copy of an object when it is passed by value to a function
- It is used to create a copy of an object when it is returned by value from a function
- It is used to create a copy of an object when it is assigned to another object of the same class.

#there can be different type of constructor in a class of same name.
This is called CONSTRUCTOR OVERLOADING. 
it is also an example of polymorphism.

.                                            - - - THIS POINTER - - -

- is used to point at the current object.
- is used to point to the memory location of an object.
- It is used to access the data members of an object.

- It is used to call the member functions of an object.
- It is used to pass an object as an argument to a function.
- It is used to return an object from a function.


NEED ?
- when we need to pass the full name of a paarameter to a function and 
the properties and parameter names are the same.

SYNTAX:
this->prop
OR
*(this).prop

ex: 
class A{
string name;
int age
public:
    A(string name, int age){
        this->name = name;
        this->age = age;
    }
};

.                                        - - - SHALOW & DEEP COPY - - -

a SHALLOW COPY of an object copies all the members values from one object to another

a DEEP COPY, not only copies member values but also makes copies any dynamically 
allocated memory that the members point to.

#by default c++ copies object by SHALLOW COPY

*/

#include <iostream>
#include <string>
using namespace std;

class Teacher{
    public:
    string name;
    int age;
    string dept;
    
    //non - parameterized constructor
    Teacher(){
        name = "John";
        age = 25;   
        dept = "Maths";
    }

    //parameterized constructor
    // Teacher(string n, int a, string d){
    //     name = n;
    //     age = a;
    //     dept = d;
    // }

    //this pointer     : tells that we are pointing to the property
    Teacher(string name, int age, string dept){
        this->name = name;          
        this->age = age;
        this->dept = dept;
    }


    //copy constructor
    Teacher(Teacher &t){
        name = t.name;
        age = t.age;
        dept = t.dept;
    }

    void Info(){
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "department: " << dept << endl;
    }
};

class Student{
    
public:
    string name;
    double* cgpaPtr;        //FOR DEEP COPY : created a dynamic allocation pointer

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;       //alloacted new memory space in heap of double type
        *cgpaPtr = cgpa;            //cgpaPtr will store cgpa's address
    }
    
    // shallow copy
    // Student(Student &obj){          //passing another object
    //     this->name = obj.name;      
    //     this->cgpaPtr = obj.cgpaPtr;   
    // }
    // agar new object ke pointer ki value chnage krunga toh , old obj ke pointer ki bhi value change 
    // hojayegi kyuki dono pointer toh same hi address ko point kr rhe hain

    //deep copy
    Student(Student &obj){  //passing another object
        this->name = obj.name;
        cgpaPtr = new double;       //alloacted new memory space in heap of double type
        *cgpaPtr = *obj.cgpaPtr;    //now it will copy the value, but wont change it
    }

    void getInfo(){
        cout << "name: " << name << endl;
        cout << "cgpa: " << *cgpaPtr << endl;   //value at address stored in cgpaPtr(value in cgpa)
    }
};

class Stu{
    
public:
    string name;
    double* cgpaPtr;        //FOR DEEP COPY
    Stu(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;       //alloacted new memory space in heap of double type
        *cgpaPtr = cgpa;            //cgpaPtr will store cgpa's address
    }

    //destructor
    ~Stu(){
        cout << "hi, i delete everything\n";
        delete cgpaPtr;             
    }

    void getInfo(){
        cout << "name: " << name << endl;
        cout << "cgpa: " << *cgpaPtr << endl;   //value at address stored in cgpaPtr(value in cgpa)
    }
};

int main(){
    Teacher T1;
    Teacher T2("sagar",21, "cse");
    Teacher T3(T2);
    cout << T1.name << " " << T1.age << " " << T1.dept << endl;
    cout << T2.name << " " << T2.age << " " << T2.dept << endl;
    cout << T3.name << " " << T3.age << " " << T3.dept << endl;


    // Teacher t1;
    // t1.Info();

    // Teacher t2("sagar",20,"cse");
    // t2.Info();

    // Teacher t3(t2); //passed another object's properties to constructor of another object
    // t3.Info();

    // deep shallow copy example
    Student s1("rahul kumar",8.5);
    s1.getInfo();

    Student s2(s1);
    s2.getInfo();
    *(s2.cgpaPtr) = 9.2;    //cgpa of s1 will also change
    s2.name = "neha";
    s1.getInfo();
    s2.getInfo();

    // destructor example
    Stu s("harshit",8.5);
    s.getInfo();


    return 0;
}


/*EXPLANATION : 

HEAP of double storing 8.5, having address 500x0
cgpaPtr POINTS to that address.
STACK OF S1 : name = "rahul"; cgpaPtr = 500x0;
STACK OF S2 : name = "rahul"; cgpaPtr = 500x0;

when cgpaPtr changed, *(s2.cgpaPtr) = 9.2; 
* value ;() of s2's ; . at address cgpaPTR (500x0) will be equal to 9.2
means at address 500x0 , whatever the value will change to 9.2;

AFTER CHANGING : 
HEAP of double storing 9.2, having address 500x0
STACK OF S1 : name = "rahul"; cgpaPtr = 500x0;
STACK OF S2 : name = "rahul"; cgpaPtr = 500x0;
*/

/*

- not deleting dynamically allocated memory can cause meory leak
- aap heap bharte ja rhe hain , aur delete hi kr rhe.
- so we use Destrcutor

.                                            - - - DESTRUCTOR - - -

- opposite of constructor
- deallocates the static memory automatically
- called when an object goes out of scope or when delete is used
- automatically created/called/invoked
- "delete" keyword is used to deallocate the memory dynamically.
ex: delete ptr : this delete the memory to which pointer is pointing, not the pointer itself

ex : ~ClassName(){}

*/

