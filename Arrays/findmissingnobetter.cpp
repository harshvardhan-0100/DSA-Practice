#include <bits/stdc++.h>
using namespace std; 

int missing(vector<int> nums) {
    int n = nums.size(); 

    vector<int> hash(n + 1, 0); 

    for (int i = 0; i < n; i++) {
        hash[nums[i]]++; 
    }

    for (int i = 0; i < n; i++) {
        if (hash[i] == 0) {
            cout << i; 
            return i; 
        }
    }
    return -1; 
}

int main() {
    vector<int> nums = {4, 5, 1, 2, 7, 6, 8};
    missing(nums); 
}