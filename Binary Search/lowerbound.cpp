#include <bits/stdc++.h>
using namespace std; 

int lowerBound(vector<int> nums, int x) {
    // lower bound is the samllest index that has the value >= the target
    // sorted array and hence we can apply binary search
    // brute force is performing a linear search
    int low = 0, high = nums.size() - 1; 
    int lb = nums.size(); 

    while (low <= high) {
        int mid = (low + high) / 2; 

        if (x > nums[mid]) {
            low = mid + 1; 
        } else if (x <= nums[mid]) {
            high = mid - 1; 
            lb = mid; 
        }
    }

    return lb; 
}

int main() {
    vector<int> nums = {3, 5, 8, 15, 19, 19, 19}; 

    cout << "Lower bound for nums: " << lowerBound(nums, 19); 

    return 0; 
}