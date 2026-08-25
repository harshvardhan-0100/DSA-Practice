#include <bits/stdc++.h>
using namespace std; 

int maxSubArray(vector<int>& nums) {
    int maxi = INT_MIN; 
    int sum = 0; 

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i]; 

        if (sum < 0) sum = 0; // reinitialize sum to 0 once it gets negative

        maxi = max(maxi, sum); 
    }
    return maxi; 
}

int main() {
    vector<int> nums = {-5, -2, -8, -1}; 

    cout << "The maximum subarray sum is: " << maxSubArray(nums) << endl;
}