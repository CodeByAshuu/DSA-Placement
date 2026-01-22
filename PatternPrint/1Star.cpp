#include <iostream>
using namespace std;

int main(){
    // for(int i=1; i<=4; i++){
    //     if(i%2 != 0){
    //         cout << "* * * *" << endl;
    //     } else{
    //         cout << "  * *  " << endl;
    //     }
    // }

    for(int i=0; i<=3; i++){
        for(int j=0; j<=3; j++){
            cout << " * ";
        } 
        cout << endl;
    }
}