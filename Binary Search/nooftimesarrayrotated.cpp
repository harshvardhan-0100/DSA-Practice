#include <bits/stdc++.h>
using namespace std; 

int rotationCount(vector<int>& nums) {
    int n = nums.size();
    int low = 0, high = n - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] > nums[high]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    return low;
}

int main() {
    vector<int> nums = {5, 6, 7, 0, 1, 2}; 
    cout << rotationCount(nums); 
}