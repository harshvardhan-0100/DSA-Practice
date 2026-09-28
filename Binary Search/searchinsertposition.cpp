#include <bits/stdc++.h>
using namespace std; 

int searchInsert(const vector<int> nums, int target) {
    int n = nums.size(), low = 0, high = n - 1, ans = n; 
    
    while (low <= high) {
        int mid = low + (high - low) / 2; 

        if (nums[mid] >= target) {
            ans = mid; 
            high = mid - 1; 
        } else {
            low = mid + 1; 
        }
    }
    return ans; 
}

int main() {
    vector<int> nums = {3, 5, 8, 15, 19, 19, 19}; 

    cout << searchInsert(nums, 16); 

    return 0; 
}