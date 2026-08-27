#include <bits/stdc++.h>
using namespace std; 

int majorityElement(vector<int> nums) {
    int ele; 
    int cnt = 0; 

    for (int i = 0; i < nums.size(); i++) {
        if (cnt == 0) {
            cnt = 1; 
            ele = nums[i]; 
        } else if (nums[i] == ele) {
            cnt++; 
        } else {
            cnt--; 
        }
    }

    // safeguard check
    int cnt1 = 0; 
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == ele) {
            cnt1++; 
        }
    }

    if (cnt1 > floor(nums.size() / 2)) {
        cout << ele << endl;
        return ele; 
    }

    return -1; 
}

int main() {
    vector<int> nums = {2, 4, 2, 4, 4, 3, 2, 4, 2, 4, 2, 4, 4, 4}; 
    majorityElement(nums); 

    return 0; 
}