#include <bits/stdc++.h>
using namespace std; 

int missing(vector<int> nums) {
    int n = nums.size(); 

    for (int i = 1; i < n; i++) {
        bool found = false; 
        for (int j = 0; j < n; j++) {
            if (nums[j] == i) {
                found = true; 
                break;
            }
        }
        if (found == false) {
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