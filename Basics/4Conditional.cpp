#include <iostream>
using namespace std;

int main(){
    int age = 19;

    //if
    if( age > 18) {
        cout << "You are an adult" << endl;
    }

    //if-else
    if(age < 18){
        cout << "You are not an adult" <<endl;
    }else{
        cout << "You are an adult";
    }

    //if-elseif-else
    int a = 4, b = 5, c = 6;
    if(a > b && b > c){
        cout << "a is the greatest" << endl;
    }else if (b > a && a > c){
        cout << "b is greatest" << endl;
    }else{
        cout << "c is greatest" << endl;
    }

    //nested if-else
    int n = 44;
    if (n > 0){
        if (n % 2 == 0){
            cout << "positive and even number" << endl;
        }else{
            cout << "positive and odd number" << endl;
        }
    }else if (n == 0) {
        cout << "number is zero" << endl;
    }else{
        cout << "the number is negative" << endl;
    }
    
    //switch
    char d = 'B';

    switch(d){
        case 'A': 
        cout << "character is A" << endl;
        break;

        case 'B':
        cout << "character is B" << endl;
        break;

        case 'C':
        cout << "character is C" << endl;
        break;

        default:
        cout << "it is not a character " << endl;
    }
    

    //fall through
    int e = 2;

    switch(e) {
        case 1:
            cout << "One ";
        case 2:
            cout << "Two ";
        case 3:
            cout << "Three ";
            break;
        default:
            cout << "Default";
    }

    int f = 2;

    switch(f) {
        case 1:
            cout << "One ";
        case 2:
            cout << "Two ";
        case 3:
            cout << "Three ";
        default:
            cout << "Default";
    }

}

/* Fall Through

fall-through in a switch statement means that when a case does not have a break, control continues 
(falls through) into the next case.
*/