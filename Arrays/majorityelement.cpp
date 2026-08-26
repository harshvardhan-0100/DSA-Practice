#include <bits/stdc++.h>
using namespace std; 

int majorityElement(vector<int> nums) {
    map<int, int> mpp; 

    for (int i = 0; i < nums.size(); i++) {
        mpp[nums[i]]++; 
    }

    for (auto it : mpp) {
        if (it.second > (floor(nums.size()) / 2)); 
        cout << it.first << endl;
        return it.first; 
    }
    return -1; 
}

int main() {
    vector<int> nums = {2, 3, 4, 5, 2, 3, 2, 3, 2, 3, 2, 2, 2, 2}; 
    majorityElement(nums); 

    return 0; 
}