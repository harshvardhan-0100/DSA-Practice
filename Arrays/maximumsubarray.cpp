#include <bits/stdc++.h>
using namespace std; 

int maximumSubarray(vector<int> nums) {
    int maxSum = INT_MIN;  
    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        for (int j = i; j < nums.size(); j++) { 
            sum += nums[j]; 
            maxSum = max(sum, maxSum); 
        }
    }

    return maxSum; 
}

int main() {
    vector<int> nums = {-2, -3, 4, -1, -2, 1, 5, -3}; 

    cout << maximumSubarray(nums) << endl; 
}