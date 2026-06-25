//  Frog jump GFG
// using Recursion O(2^n)

#include <iostream>
#include <vector>
using namespace std;

int minimumCost(int i,vector<int>& height){
    if(i == 0){
        return 0;
    }
    
    if(i < 0){
        return 1e9;
    }
    
    int jump1 = abs(height[i] - height[i-1]) + minimumCost(i-1, height);
    int jump2 = abs(height[i] - height[i-2]) + minimumCost(i-2, height);
    return min(jump1, jump2);
}


int main(){
    vector<int> height = {20, 30, 40, 20};
    int i = height.size()-1;
    cout << minimumCost(i, height);
    return 0;
}