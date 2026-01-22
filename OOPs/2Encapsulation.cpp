/*                                      - - - ENCAPSULATION - - -

- wrapping up of data and member function in a single unit called class
- data hiding(private)
- encapsulation is a fundamental concept of object-oriented programming (OOP)

Simple explanation:
You protect data so no one can mess with it directly.
Access happens only through methods.

- Hide data
- how data is protected
- access specifiers( private, protected, public)
- Implementation level
- car engine data is private
*/
#include <iostream>
#include <string>
using namespace std;

class Acount{
    private:
    double balance;
    string password;
    public:
    int accontId;
    string userName;
}

/*                                         - - - ABSTRACTION - - - 


Abstraction in Java is the process of hiding internal implementation details and showing only 
essential functionality to the user. 
It focuses on what an object does rather than how it does it.

Abstraction means displaying only essential information about the data and ignoring the 
internal details or implementation.

Simple explanation:
You show what an object can do, not how it does it.
User just uses the feature without caring about the internal code.

- Hide Implementation
- what object does
- abstract classes, instances
- design level
- ex: Car Interface(drive, brake)
*/