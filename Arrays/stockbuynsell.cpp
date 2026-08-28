#include <bits/stdc++.h>
using namespace std; 

int maxProfit(vector<int> prices) {
    int profit = 0; 
    int max_profit = 0; 

    for (int i = 0; i < prices.size(); i++) {
        for (int j = i + 1; j < prices.size(); j++) {
            profit = prices[j] - prices[i]; 
            max_profit = max(max_profit, profit); 
        }
    }

    return max_profit; 
}

int main() {
    vector<int> prices = {3, 10, 1, 4, 2, 15}; 

    cout << "Maximum profit is: " << maxProfit(prices); 
}