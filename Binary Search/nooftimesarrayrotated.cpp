#include <bits/stdc++.h>
using namespace std; 

int rotationCount(vector<int>& nums) {
    int n = nums.size(), low = 0, high = n - 1; 
    int ans = INT_MAX; 
    
    while (low <= high) {
        int mid = (low + high) / 2; 

        if (nums[low] <= nums[mid]) {
            if (nums[low] < ans) {
                ans = nums[low]; 
                low = mid + 1; 
            } 
        } else {
            if (nums[mid] < ans) {
                ans = nums[mid]; 
                high = mid - 1; 
            }
        }
    }
    return ans; 
}

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2}; 
    cout << rotationCount(nums); 
}