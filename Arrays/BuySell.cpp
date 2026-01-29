#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
    int prices[] = {3, 1, 6, 1, 2, 4};
    int maxProfit = INT_MIN;
    int minTillNow = prices[0];
    for(int current : prices){
        int profit = current - minTillNow;
        maxProfit  = max(maxProfit, profit);
        // if(current < minTillNow){
        //     minTillNow = current;
        // }
        minTillNow = min(current, minTillNow);
    }

    cout << maxProfit;
    // return maxProfit;
}