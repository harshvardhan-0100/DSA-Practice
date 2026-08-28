#include <bits/stdc++.h>
using namespace std; 

int  maximumSubarray(vector<int> nums) {
    int maxi = INT_MIN;  
    int sum = 0; 
    int start = -1, end = -1; 
    int t_start = 0; 

    for (int i = 0; i < nums.size(); i++) {
        if (sum == 0) t_start = i; 

        sum += nums[i]; 

        if (sum < 0) {
            sum = 0; // sum reinitialized to zero
        }

        if (sum > maxi) {
            maxi = sum; 
            start = t_start;
            end = i; 
        }
    }

    cout << "The maximum subarray sum is: " << maxi << endl;
    cout << "Starting index: " << start << endl;
    cout << "Ending index: " << end << endl;

    return maxi; 
    
}

int main() {
    vector<int> nums = {-2, 4, -1, 5, 1, -6}; 

    maximumSubarray(nums); 
}