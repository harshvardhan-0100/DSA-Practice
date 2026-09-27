#include <bits/stdc++.h>
using namespace std; 

int floor(const vector<int> nums, int x) {
    int floor = -1; 
    int low = 0, high = nums.size() - 1; 

    // if (low > high) return floor; 

    while (low <= high) {
        int mid = (low + high) / 2; 

        if (x < nums[mid]) {
            high = mid - 1; 
        } else {
            low = mid + 1; 
            floor = nums[mid]; 
        }
    }

    return floor; 
}

int ceil(const vector<int> nums, int x) {
    int ceil = -1; 
    int low = 0, high = nums.size() - 1; 

    while (low <= high) {
        int mid = (low + high) / 2; 

        if (x > nums[mid]) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
            ceil = nums[mid]; 
        }
    }
    return ceil;
}

int main() {
    vector<int> nums = {2, 3, 5, 6, 7, 9, 10, 12, 13, 15, 17, 27};

    cout << floor(nums, 16) << endl; 
    cout << ceil(nums, 6) << endl; 
}