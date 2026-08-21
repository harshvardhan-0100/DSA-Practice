#include <bits/stdc++.h>
using namespace std; 

int singleNumber(vector<int> nums) {
    int max = INT_MIN; 
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > max) {
            max = nums[i]; 
        }
    }

    vector<int> freq(max + 1, 0); 

    for (int i = 0; i < nums.size(); i++) {
        freq[nums[i]]++; 
    }

    for (int i = 0; i < max + 1; i++) {
        if (freq[i] == 1) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2, 4, 57}; 

    cout << "Single number from the array is: " << singleNumber(nums) << endl;
}