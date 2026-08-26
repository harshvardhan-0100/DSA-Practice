#include <bits/stdc++.h>
using namespace std; 

void getElements(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;
}

void sortColours(vector<int> nums) {
    getElements(nums); 

    int cnt0 = 0, cnt1 = 0, cnt2 = 0; 
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            cnt0++; 
        } else if (nums[i] == 1) {
            cnt1++; 
        } else {
            cnt2++; 
        }
    }

    for (int i = 0; i < cnt0; i++) {
        nums[i] = 0; 
    } 
    for (int i = cnt0; i < cnt0 + cnt1; i++) {
        nums[i] = 1; 
    }
    for (int i = cnt0 + cnt1; i < nums.size(); i++) {
        nums[i] = 2; 
    }

    getElements(nums); 
}

int main() {
    vector<int> nums = {0, 2, 1, 1, 2, 2, 2, 0, 1, 1, 0, 0}; 

    sortColours(nums); 
}