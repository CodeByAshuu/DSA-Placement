// Convert rows and columns to zeroes where zeros is found.

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int row = matrix.size();
    int col = matrix[0].size();

    // for(int i = 0; i < row; i++){
    //     for(int j = 0; j < col; j++){
    //         if(matrix[row][col] == 0){
    //             matrix[row][0] = 0;
    //             matrix[0][col] = 0;
    //         }
    //     }
    // }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << matrix[row][col] << " "; 
        }
        cout<< endl;
    }
}


int main(){
    vector <vector <int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    setZeroes(matrix);
}

//  [[1,0,1],[0,0,0],[1,0,1]]