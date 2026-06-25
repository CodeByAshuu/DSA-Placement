#include <iostream>
#include <vector>
using namespace std;

int minimumCost(vector<int>& height){
    int prev1 = 0;
    int prev2 = 0;

    for(int t = 1; t < height.size(); t++){
        int jump1  = abs(height[t] - height[t-1]) + prev1;
        int jump2 = 1e9;
        
        if(t > 1){
            jump2 = abs(height[t] - height[t-2]) + prev2;
        }
        
        int curr = min(jump1, jump2);

        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}

int main() {
    vector<int> height = {20, 30, 40, 20};
    cout << minimumCost(height);
    return 0;
}