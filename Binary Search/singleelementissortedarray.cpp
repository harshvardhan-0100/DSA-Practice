#include <bits/stdc++.h>
using namespace std; 

int singleNumber(vector<int>& nums) {
    int n = nums.size(); 
    int ans = 0; 

    if (n == 1) {
        return nums[0]; 
    }

    int i = 0; 
    while (i < n) {
        if (nums[i] == nums[i - 1] || nums[i] == nums[i + 1]) {
            i++; 
        } else {
            return nums[i]; 
        }
    }

    return ans; 
}

int main() {
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8}; 
    cout << singleNumber(nums); 
}