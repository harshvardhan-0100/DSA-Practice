#include <bits/stdc++.h>
using namespace std; 

int upperBound(vector<int>& nums, int target) {
    int n = nums.size(), low = 0, high = n - 1; 
    int ub = n; 

    while (low <= high) {
        int mid = (low + high) / 2; 

        if (nums[mid] <= target) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
            ub = mid; 
        }
    }
    return ub; 
}

int main() {
    vector<int> nums = {1, 2, 2, 33, 41, 43, 56, 167}; 
    int n; 
    cout << "enter a number: ";
    cin >> n; 

    cout << "upper bound of " << n << " is: " << upperBound(nums, n); 
}