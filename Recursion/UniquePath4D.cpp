#include <iostream>
#include <vector>
using namespace std;

int main(){
    int m , n;
    cin >> m >> n;
    int grid[m][n];
    path(0,0,m,n, grid, visited);
}