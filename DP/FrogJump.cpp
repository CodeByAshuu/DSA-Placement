//  Frog jump GFG
// using Dynamic Programming O(n)
// Recursion => DP => Eliminating Recursion => Space optimization

#include <iostream>
#include <vector>
using namespace std;

int minimumCost(int i,vector<int>& height, vector<int>& dp){
    if(i == 0){
        return 0;
    }
    
    if(i < 0){
        return 1e9;
    }

    if(dp[i] != -1){
        return dp[i];
    }
    
    int jump1 = abs(height[i] - height[i-1]) + minimumCost(i-1, height, dp);
    int jump2 = abs(height[i] - height[i-2]) + minimumCost(i-2, height, dp);
    return dp[i] = min(jump1, jump2);
}


int main(){
    vector<int> height = {20, 30, 40, 20};
    int i = height.size()-1;
    vector<int> dp(height.size(), -1);
    cout << minimumCost(i, height, dp);
    return 0;
}