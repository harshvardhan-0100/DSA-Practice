#include <bits/stdc++.h>
using namespace std; 

int maxSubArray(vector<int>& nums) {
    int maxi = INT_MIN;
    int sum = 0; 

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i]; 

        if (sum < 0) sum = 0; 

        maxi = max(sum, maxi); 
    }

    return maxi; 
}

int main() {
    vector<int> nums = {4, -1, 3, 2, -5, 1, 7, -3, 4}; 

    cout << "The maximum subarray sum is: " << maxSubArray(nums) << endl;
}