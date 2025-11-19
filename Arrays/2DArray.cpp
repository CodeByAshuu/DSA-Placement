/*                                  - - - MULTIDIMENSIONAL ARRAY - - -

SYNTAX:
data_type arrayName[num_rows][num_cols];
ex: int arr[n][m];

int matrix[3][4] = {
    {1, 2, 3},
    {4, 5, 6},
    {9, 8, 9}
};

// accesing the element
int value = matrix[0][2]; // value will be 3

// traversing
for (int i = 0; i < num_rows; ++i) {
    for (int j = 0; j < num_cols; ++j) {
        // Access or manipulate matrix[i][j]
    }
}

// passing 2D array to function
void printMatrix(int arr[][4], int num_rows) {
    // Function body
}
*/

#include <iostream>
using namespace std;


void printArray(int arr[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n, m;
    cout << "enter number of rows and col: ";
    cin >> n >> m;
    int arr[n][m];
    for(int i =0;i<n;i++){
        for(int j=0; j<m;j++){
            cin >> arr[i][j];
        }
    }

    for(int i =0;i<n;i++){
        for(int j=0; j<m;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int arr1[3][3] = {
        {1,2,3}, 
        {4,5,6}, 
        {7,8,9}
    };
    printArray(arr1);
    
}
