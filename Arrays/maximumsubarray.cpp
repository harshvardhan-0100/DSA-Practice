#include <bits/stdc++.h>
using namespace std; 

vector<int>  maximumSubarray(vector<int> nums) {
    int maxSum = INT_MIN;  
    int start = -1, end = -1; 
    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        for (int j = i; j < nums.size(); j++) { 
            sum += nums[j]; 
            if (sum > maxSum) {
                maxSum = sum;
                start = i; 
                end = j; 
            } 
        }
    }

    return {maxSum, start, end}; 
}

int main() {
    vector<int> nums = {-2, -3, 4, -1, -2, 1, 5, -3}; 

    vector<int> ans = maximumSubarray(nums); 

    cout << "Max. sum: " << ans[0] << endl; 
    cout << "Start index: " << ans[1] << endl; 
    cout << "End index: " << ans[2] << endl; 
}