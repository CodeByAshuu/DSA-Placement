#include <iostream>
#include <vector>
using namespace std;

int main(){

    // for
    for(int i=1; i <= 5; i++){
        cout << i << " ";
    }
    cout << endl;

    // while 
    int j = 1;
    while(j<=5){
        cout << "hellow world" << endl;
        j++;
    }

    //do-while
    int k = 1;
    do{
        cout << k << " ";
        ++k; 
    }while(k<5);
    cout << endl;

    //for-each
    vector<int> arr = {1,2,3,4,5};
    //by value
    for(auto item : arr){
        cout << item << " "; 
    }    
    cout << endl;

    //by reference
    for(auto &i : arr){
        cout << i << " ";
    }
    cout << endl;

    // infinite loop
    // for(;;){        //condition expression is blank
    //     cout << "infinite loop" << endl;
    // }

    //nested loop
    for (int i = 0; i < 3; i++) {
        // Outer loop runs 3 times
        for (int j = 0; j < 2; j++) {
            // Inner loop runs 2 times for each outer loop iteration
            cout << "i = " << i << ", j = " << j << endl;
        }
    }
    // 3 x 2 = 6 times

    // break
    for (int i = 0; i < 5; i++) {
        // Terminating before reaching i = 4
        if (i == 2){
            break;
        }
        cout << "Hi" << endl; 
    }

    // continue
    for (int i = 0; i < 5; i++) {
        // skiping i = 2
        if (i == 2){
            continue;
        }
        cout << i << endl; 
    }

}

/* Loop control statements

1. break : terminates the loop regardless of its test condition
2. continue :  skip the remaining code in iteration
*/