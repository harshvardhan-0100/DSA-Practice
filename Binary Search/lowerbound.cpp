#include <bits/stdc++.h>
using namespace std; 

int lowerBound(vector<int> nums, int x) {
    // lower bound is the samllest index that has the value >= the target
    // sorted array and hence we can apply binary search
    // brute force is performing a linear search
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] >= x) {
            return i; 
        }
    }

    return -1; 
}

int main() {
    vector<int> nums = {3, 5, 8, 15, 19, 19, 19}; 

    cout << "Lower bound for nums: " << lowerBound(nums, 14); 

    return 0; 
}