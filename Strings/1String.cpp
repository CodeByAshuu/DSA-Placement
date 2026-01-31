/*                                      - - - STRINGS - - - 

Strings in C++ are objects of the std::string class. 
They are used to represent and manipulate sequences of characters.
A string variable contains a collection of characters surrounded by double quotes (""):

*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string greeting = "Hello";
    cout << greeting << endl;

    string firstName = "John ";
    string lastName = "Doe";

    // + operator to concatenate strings
    string fullName = firstName + " " + lastName;
    cout << fullName << endl;
    
    //to concatenate strings
    string fllname = firstName.append(lastName);
    cout << fllname << endl;;

    string x = "10";
    // int y = 20;
    // string z = x + y;   //error

    // length of string
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << alphabet.length() << endl;
    cout << "The length of the txt string is: " << alphabet.size() << endl;

    // accesing a chracter from string
    string myString = "Hello";
    cout << myString[0] << endl;

    // changing character of strings
    myString[0] = 'J';
    cout << myString << endl;

    // at() function that can be used to access characters in a string:
    cout << myString.at(0) << endl;  // First character
    cout << myString.at(1) << endl;  // Second character
    cout << myString.at(myString.length() - 1) << endl;  // Last character

    // use the backslash escape character.
    // string txt = "We are the so-called "Vikings" from the north."; //this will give error
    string txt1 = "We are the so-called \"Vikings\" from the north";
    string txt2 = "It's alright.";
    cout << txt1 <<endl;
    cout << txt2 <<endl;

    // user input string
    // string first;
    // cout << "Type your first name: ";
    // cin >> first;                           // get user input from the keyboard
    // cout << "Your name is: " << first << endl;
    // However, cin considers a space (whitespace, tabs, etc) as a terminating character,
    // which means that it can only store a single word (even if you type many words):

    // getline() function to read a line of text. getline(cin, fullName);
    // string fname;
    // cout << "Enter fact using getline: ";
    // getline(cin, fname);
    // cout << fname << endl;

    // c-style string
    char greeting1[] = "Hello C-Style String";
    cout << greeting1 << endl;

    string str = "Hello Geeks";

    // Adding a character at the end
    str.push_back('!');
    cout << "After push_back: " << str << endl;

    // Removing the last character
    str.pop_back();
    cout << "After pop_back: " << str << endl;

    // Inserting a substring
    str.insert(5, " C++");
    cout << "After insert: " << str << endl;

    // Erasing part of the string erase(index, number of character to erase)
    str.erase(5, 4);
    cout << "After erase: " << str << endl;

    

    // Extract "Hello" substr(index, num of characters to extract)
    string sub1 = str.substr(0, 5);   
    cout << "Substring 1: " << sub1 << endl;

    // Extract "Geeks"
    string sub2 = str.substr(6, 5);  
    cout << "Substring 2: " << sub2 << endl;

    // The find() function is used to search for a substring inside a string. 
    // If found, it returns the index (position) where the substring starts; if not, it returns a special value (npos).
    // Time complexity to search is O(n*m), where n is the length of string and m is the substring length.
    size_t pos = str.find("ello");
    if (pos < str.size()) {
        cout << "\"ello\" found at index: " << pos << endl;
    }

    // returns last occurence of the string
    size_t pos1 = str.rfind("ello");
    if (pos1 < str.size()) {
        cout << "\"ello\" found at index: " << pos1 << endl;
    }

    // clearing all part of string
    str.clear();
    cout << "After clear(): " << str << endl;

    string str1 = "ashu";
    string str2 = "stuti";

    // to swap values of strings
    swap(str1, str2);
    cout << "str1 : " << str1 << "\nstr2: " << str2 << endl;


    string str3 = "Hey Stuti!";
    // to resize string upto given number of characters: 
    // resize(Number of characters the %string should contain)
    str3.resize(5);
    cout << "After resize(): " << str3 << endl;

    // replace (index, Number of characters to be replaced., string)
    str3.replace(5,0,"tuti");
    cout << "After replace(): " << str3 << endl;

    return 0;
}