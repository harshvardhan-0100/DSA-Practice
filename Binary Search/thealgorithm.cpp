#include <bits/stdc++.h>
using namespace std; 

int binarySearch(vector<int> arr, int target) {
    int n = arr.size(); 
    // defining the search space
    int low = 0, high = n - 1; 
    
    while (low <= high) {
        int mid = (low + high) / 2; 

        if (target == arr[mid]) {
            return mid; 
        }

        else if (target < arr[mid]) {
            high = mid - 1; 
        }

        else if (target > arr[mid]) {
            low = mid + 1; 
        }
    }
    return -1; 
}

int main() {
    vector<int> nums = {2, 3, 5, 6, 7, 9, 10, 12, 13, 15, 17, 27}; 
    int target = 13; 

    cout << "Position(index) of " << target << " is: " << binarySearch(nums, target); 
    
    return 0; 
}