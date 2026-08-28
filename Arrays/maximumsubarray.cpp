#include <bits/stdc++.h>
using namespace std; 

int  maximumSubarray(vector<int> nums) {
    int maxi = nums[0]; 
    int sum = nums[0]; 

    for (int i = 1; i < nums.size(); i++) {
        sum = max(nums[i], sum + nums[i]); 
        maxi = max(sum, maxi);
    }

    return maxi; 
}

int main() {
    vector<int> nums = {-2, -3, 4, -1, -2, 1, 5, -3}; 

    cout << "Max. subarray sum is: " << maximumSubarray(nums); 
}