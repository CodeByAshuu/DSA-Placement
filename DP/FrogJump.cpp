#include <iostream>
#include <vector>
using namespace std;

int minimumCost(int i,vector<int>& height, vector<int>& dp){
    for(int t = 1; t < height.size(); t++){
        int jump1  = abs(height[t] - height[t-1]) + dp[t-1];
        int jump2 = 1e9;
        
        if(t > 1){
            jump2 = abs(height[t] - height[t-2]) + dp[t-2];
        }
        
        dp[t] = min(jump1, jump2);
    }
    return dp[height.size()-1];
}

int main() {
    vector<int> height = {20, 30, 40, 20};
    vector<int>dp(height.size(), 0);
    dp[0]= 0;
    int i = height.size()-1;
    return minimumCost(i, height, dp);
}