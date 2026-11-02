#include <bits/stdc++.h>
using namespace std; 

int rotationCount(vector<int>& nums) {
    int n = nums.size(), low = 0, high = n - 1; 
    int mini = INT_MAX, ans = 0; 
    
    while (low <= high) {
        int mid = (low + high) / 2; 

        if (nums[low] <= nums[mid]) {
            if (nums[low] < mini) {
                mini = nums[low]; 
                ans = low; 
            } 

            low = mid + 1; 
        } 
        else {
            if (nums[mid] < mini) {
                mini = nums[mid]; 
                ans = mid;
            }

            high = mid - 1; 
        }
    }
    return ans; 
}

int main() {
    vector<int> nums = {5, 6, 7, 0, 1, 2}; 
    cout << rotationCount(nums); 
}