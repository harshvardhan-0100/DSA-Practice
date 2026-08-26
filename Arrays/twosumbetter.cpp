#include <bits/stdc++.h>
using namespace std; 

vector<int> twoSum(vector<int> nums, int target) {
    map<int, int>  mpp; 

    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i]; 
        int more = target - num; 

        if (mpp.find(more) != mpp.end()) {
            return {i, mpp[more]}; 
        }

        mpp[nums[i]] = i; 
    }
    return {-1, -1}; 
}

int main() {
    vector<int> nums = {2, 3, 4, 7, 9, 10}; 
    int target = 17; 

    vector<int> twoS = twoSum(nums, target); 
    
    for (int i = 0; i < twoS.size(); i++) {
        cout << twoS[i] << " "; 
    }
    cout << endl; 
}