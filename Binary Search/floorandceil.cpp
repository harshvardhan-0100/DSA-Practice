#include <bits/stdc++.h>
using namespace std; 

int floor(const vector<int> nums, int target) {
    int n = nums.size();  
    int low = 0, high = n - 1, ans = -1; 

    while (low <= high) {
        int mid = (low + high) / 2; 

        if (nums[mid] <= target) {
            ans = mid; 
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }
    return ans; 
}

int ceil(const vector<int> nums, int target) {
    int n = nums.size(); 
    int low = 0, high = n - 1, ans = n; 

    while (low <= high) {
        int mid = (low + high) / 2; 

        if (nums[mid] >= target) {
            ans = mid; 
            high = mid - 1; 
        } else {
            low = mid + 1; 
        }
    }
    return ans;
}

class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int n = nums.size(), low = 0, high = n; 
        int floor = -1, ceil = -1; 

        while (low <= high) {
            int mid = (low + high) / 2; 

            if (nums[mid] == x) {
                return {nums[mid], nums[mid]}; 
            }
            else if (nums[mid] <= x) {
                low = mid + 1; 
                floor = mid; 
            } else {
                high = mid - 1; 
                ceil = mid; 
            }
        }
        // while (low <= high) {
        //     int mid = (low + high) / 2; 

        //     if (nums[mid] < x) {
        //         low = mid + 1;  
        //     } else {
        //         high = mid - 1; 
        //         ceil = mid; 
        //     }
        // }

        if (ceil == -1) {
            return {nums[floor], -1}; 
        } else if (floor == -1) {
            return {-1, nums[ceil]}; 
        } else {
            return {nums[floor], nums[ceil]}; 
        }
    }
};

int main() {
    vector<int> nums = {2, 3, 5, 6, 7, 9, 10, 12, 13, 15, 17, 27};

    cout << floor(nums, 16) << endl; 
    cout << ceil(nums, 6) << endl; 
}