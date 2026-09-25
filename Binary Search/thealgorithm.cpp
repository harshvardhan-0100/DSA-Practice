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

}