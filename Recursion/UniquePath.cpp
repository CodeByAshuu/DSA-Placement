// Unique path from source to destination 
#include <iostream>
using namespace std;

int recursion(int i , int j , int m , int n){
    if(i == m - 1 && j  == n -1){
        return 1;
    }

    if(i == m || j == n){
        return 0;
    }

    int d = recursion(i + 1, j, m, n);
    int r = recursion(i, j + 1, m, n);

    return d+r;
}

int uniquePaths(int m, int n) {
    return recursion(0,0,m,n);
}

int main(){
    int m, n;
    cin >> m >> n;
    cout << uniquePaths(m,n);
    return 0;
}
