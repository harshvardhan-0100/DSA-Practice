#include <bits/stdc++.h>
using namespace std; 

void getElements(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;
}

void removeDup(vector<int> nums) {
    getElements(nums);

    int n = nums.size(); 

    int i = 0, j = 1; 

    for (j = 1; j < n; j++) {
        if (nums[i] != nums[j]) {
            nums[i + 1] = nums[j]; 
            i++; 
        }
    }

    getElements(nums); 
}

int main() {
    vector<int> nums = {1, 2, 2, 3, 3, 3, 5, 6, 6, 7, 87}; 

    removeDup(nums); 
}