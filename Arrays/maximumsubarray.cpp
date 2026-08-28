#include <bits/stdc++.h>
using namespace std; 

int  maximumSubarray(vector<int> nums) {
    int maxi = nums[0]; 
    int sum = nums[0]; 
    int start = -1, end = -1;
    int temp_start = -1; 

    for (int i = 1; i < nums.size(); i++) {
        // sum = max(nums[i], sum + nums[i]); 

        if (nums[i] > sum + nums[i]) {
            sum = nums[i]; 
            temp_start = i; 
        }

        else {
            sum = sum + nums[i]; 
        }

        // maxi = max(sum, maxi);

        if (sum > maxi) {
            maxi = sum; 
            start = temp_start; 
            end = i; 
        }
    }

    cout << "max. sum: " << maxi << endl;
    cout << "start index: " << start << endl;
    cout << "end index: " << end << endl;

    return maxi; 
}

int main() {
    vector<int> nums = {-2, -3, 4, -1, -2, 1, 5, -3}; 

    cout << "Max. subarray sum is: " << maximumSubarray(nums); 
}