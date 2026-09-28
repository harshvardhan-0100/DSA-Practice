#include <bits/stdc++.h>
using namespace std; 

int firstOccurence(const vector<int> nums, int x) {
    int n = nums.size(); 
    int low = 0, high = n - 1, ans = -1; 

    while (low <= high) {
        int mid = (low + high) / 2; 

        if (nums[mid] >= x) {
            ans = mid; 
            high = mid - 1; 
        }
        else {
            low = mid + 1; 
        }
    }
    return ans; 
}

int lastOccurence(const vector<int> nums, int x) {
    int n = nums.size(); 
    int low = 0, high = n - 1, ans = -1; 

    while (low <= high) {
        int mid = (low + high) / 2; 

        if (nums[mid] <= x) {
            ans = mid;
            low = mid + 1;  
        }
        else {
            high = mid - 1; 
        }
    }
    return ans; 
}

int main() {
    vector<int> nums = {3, 5, 8, 15, 17, 17, 19, 19, 19}; 

    cout << firstOccurence(nums, 19) << endl; 
    cout << lastOccurence(nums, 17) << endl; 

    return 0; 
}