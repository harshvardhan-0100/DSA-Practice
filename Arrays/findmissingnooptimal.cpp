#include <bits/stdc++.h>
using namespace std; 

int missing(vector<int> nums) {
    int n = nums.size() + 1; 

    int sum; 
    for (int i = 0; i < n - 1; i++) {
        sum += nums[i]; 
    }

    long long expSum = (n * (n + 1)) / 2; 

    cout << expSum - sum << endl; 
    return expSum - sum; 
}

int main() {
    vector<int> nums = {4, 5, 1, 2, 7, 6, 8};
    missing(nums);
}