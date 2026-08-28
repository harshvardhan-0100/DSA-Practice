#include <bits/stdc++.h>
using namespace std; 

int  maximumSubarray(vector<int> nums) {
    int maxi = INT_MIN;  
    int sum = 0; 

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i]; 

        if (sum < 0) {
            sum = 0; // sum reinitialized to zero
        }

        maxi = max(sum, maxi); 
    }

    return maxi; 
    
}

int main() {
    vector<int> nums = {-2, -3, 4, -1, -2, 1, 5, -3}; 

    cout << "Max. subarray sum: " << maximumSubarray(nums) << endl;
}