#include <bits/stdc++.h>
using namespace std; 

int maxSubArray(vector<int>& nums) {
    int maxi = INT_MIN; 
    int sum = 0; 
    int ansStart = -1, ansEnd = -1; // initialize variables to store the start and end index of the answer array

    int Start = 0;
    for (int i = 0; i < nums.size(); i++) { 
        if (sum == 0) Start = i; 
        sum += nums[i]; 

        if (sum < 0) sum = 0; // reinitialize sum to 0 once it gets negative

        if (sum > maxi) {
            maxi = sum; 
            ansStart = Start; // if the curr. subarray is maximum, the index that 'Start' was initialized to will be ansStart
            ansEnd = i; // if curr. subarray is maximum, the index that is current, as in last is the ansEnd
        }
    }

    cout << "The maximum subarray sum is: " << maxi << endl;
    cout << "Starting index: " << ansStart << endl;
    cout << "Ending index: " << ansEnd << endl;

    return maxi; 
}

int main() {
    vector<int> nums = {-5, 2, -1, 7, -2, 3}; 

    maxSubArray(nums);     
}