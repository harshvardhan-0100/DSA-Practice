#include <bits/stdc++.h>
using namespace std; 

int singleNumber(vector<int>& nums) {
    int n = nums.size(), low = 0, high = n - 1; 
    int ans = -1; 
    int temp; 

    int i = 0; 

    if (n == 1) {
        return nums[0]; 
    }

    while (i < n) {
        temp = nums[i]; 
        if (nums[i + 1] == temp) {
            i += 2; 
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