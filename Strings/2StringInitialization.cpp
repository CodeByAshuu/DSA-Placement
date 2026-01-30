#include <iostream>
#include <string>
using namespace std;

int main(){
    // 1. Default initialization (creates an empty string)
    string s1;

    // 2. Direct initialization with a string literal using the assignment operator
    string s2 = "Hello, world!";

    // 3. Initialization using constructor syntax (parentheses)
    string s3("C++ Strings");

    // 4. List initialization (braces)
    string s4{'a', 'b', 'c'}; // s4 contains "abc"

    // 5. Initialize with a specific number of repeated characters
    string s5(5, 'X'); // s5 contains "XXXXX"
    
    // 6. Copy initialization from another string object
    string s6 = s2;

    cout << "s1: " << s1 << endl; // Output: s1: 
    cout << "s2: " << s2 << endl; // Output: s2: Hello, world!
    cout << "s3: " << s3 << endl; // Output: s3: C++ Strings
    cout << "s4: " << s4 << endl; // Output: s4: abc
    cout << "s5: " << s5 << endl; // Output: s5: XXXXX
    cout << "s6: " << s6 << endl; // Output: s6: Hello, world!
}