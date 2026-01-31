/* While C++ does not support "native" jagged arrays with built-in syntax like some other languages 
(e.g., C# or Java), you can easily create and use them using an array of pointers or, the more modern 
and recommended C++ approach, a vector of vectors (vector<vector<int>>). 

Using vector<vector<int>> (Recommended) 
This is the most idiomatic C++ way, as it handles memory management automatically and provides flexibility. 
The inner vectors can each have a different size. 
*/

#include <iostream>
#include <vector>
using namespace std;


// METHOD 1
// int main() {
//     // Declare a vector of vectors of integers
//     vector<vector<int>> jagged_vector;

//     // Add rows with different numbers of columns
//     jagged_vector.push_back({1, 2, 3});
//     jagged_vector.push_back({4, 5});
//     jagged_vector.push_back({6, 7, 8, 9});

//     // Iterate and print the elements
//     for (const auto& row : jagged_vector) {
//         for (int element : row) {
//             cout << element << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// 1 2 3 
// 4 5 
// 6 7 8 9

// METHOD 2 : C - POINTER
int main() {
    int rows = 3;
    // 1. Create an array of pointers
    int **jagged_array = new int *[rows];

    // 2. Allocate memory for each row with varying sizes
    jagged_array[0] = new int[2]{1, 2};
    jagged_array[1] = new int[3]{3, 4, 5};
    jagged_array[2] = new int[4]{6, 7, 8, 9};

    // 3. Access and print elements
    for (int i = 0; i < rows; i++) {
        // You would need to store the size of each row separately
        // to prevent accessing out of bounds in a real application.
        // For this example, we use the known sizes (2, 3, 4).
        int cols = (i == 0) ? 2 : (i == 1) ? 3 : 4;
        for (int j = 0; j < cols; j++) {
            cout << jagged_array[i][j] << " ";
        }
        cout << endl;
    }

    // 4. Deallocate memory to prevent memory leaks
    for (int i = 0; i < rows; i++) {
        delete[] jagged_array[i];
    }
    delete[] jagged_array;

    return 0;
}
