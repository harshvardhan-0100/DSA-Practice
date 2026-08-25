#include <bits/stdc++.h>
using namespace std; 

int maxSubArray(vector<int>& nums) {
    int maxi = nums[0]; 
    int sum = nums[0]; 

    for (int i = 1; i < nums.size(); i++) {
        sum = max(nums[i], sum + nums[i]);
        maxi = max(sum, maxi);  
    }
    return maxi; 
}

int main() {
    vector<int> nums = {-5, -2, -8, -1}; 

    cout << "The maximum subarray sum is: " << maxSubArray(nums) << endl;
}