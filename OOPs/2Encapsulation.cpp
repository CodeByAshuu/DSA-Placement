/*                                      - - - ENCAPSULATION - - -

- wrapping up of data and member function in a single unit called class
- data hiding(private)
- encapsulation is a fundamental concept of object-oriented programming (OOP)


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