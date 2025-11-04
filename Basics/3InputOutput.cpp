/*
In C++, data is read and written using streams, which are sequences of bytes.

Input stream: Data flows from a device (like the keyboard) to the computer’s memory.
Output stream: Data flows from memory to an output device (like the screen).

These streams are defined in the <iostream> header file.
The most common stream objects are - 
cin : for taking input, 
cout : for displaying output.

Standard Output Stream - cout
cout is an instance of the ostream class used to display output on the screen.
Data is sent to cout using the insertion operator <<.

Standard Input Stream - cin
cin is an instance of the istream class used to read input from the keyboard.
The extraction operator >> is used with cin to get data from the input stream and store it in a variable.

Un-buffered Standard Error Stream - cerr
cerr is the standard error stream used to display error messages. 
It is an instance of the ostream class.
cerr displays messages immediately, without waiting (Unbuffered output)
Useful for showing errors or warnings separately from normal program output (cout).
Unlike cout, which may delay output due to buffering, cerr ensures errors are seen instantly.
*/

#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age: " ;
    cin >> age ;

    cout << "Your age is : " << age << endl;

    cerr << "An error occured!!" ;
    return 0;

}