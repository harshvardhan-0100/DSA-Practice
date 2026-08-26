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

    int n = nums.size(); 

    int low = 0; 
    int mid = 0; 
    int high = n - 1; 

    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low], nums[mid]); 
            low++; 
            mid++; 
        } else if (nums[mid] == 1) {
            mid++; 
        } else {
            swap(nums[mid], nums[high]); 
            high--; 
        }
    }

    getElements(nums); 
}

int main() {
    vector<int> nums = {0, 2, 1, 1, 2, 2, 2, 0, 1, 1, 0, 0}; 

    sortColours(nums); 
}