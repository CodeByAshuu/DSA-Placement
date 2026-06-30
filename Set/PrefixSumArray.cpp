#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {2, 9, 1, 3, 5};

    vector<int> prefixSum(arr.size());

    prefixSum[0] = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    for (int x : prefixSum)
        cout << x << " ";

    return 0;
}