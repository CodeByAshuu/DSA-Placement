#include <iostream>
#include <vector>
#include <string>
using namespace std;

void recursion(int i, int j, int m, int n, 
    vector<string>& res,
    string path){
    if(i == m -1 && j == n - 1){
        // cout << path << endl;
        res.push_back(path);
        return;
    }

    if (i >= m || j >= n){
        return;
    }

    recursion(i + 1, j, m,n, res, path+"D");
    recursion(i, j + 1, m ,n , res, path+"R");
}


int main(){
    int m,n;
    cin >> m >> n;

    // recursion(0,0,m,n,"");
    vector<string> res;
    recursion(0,0,m,n, res,"");

    for(string x : res){
        cout << x << " ";
    }

    return 0;
}
