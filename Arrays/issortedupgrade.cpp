#include <bits/stdc++.h>
using namespace std; 

bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 2; i++) {
        if (arr[i] > arr[i + 1]) {
            cout << "Not a sorted array."; 
            return false; 
        }
        if (arr[i] < arr[i + 1]) {
            continue; 
        }
    }
    cout << "The array is sorted."; 
    return true; 
}

int main() {
    int nums[10]; 
    for (int i = 0; i < 10; i++) {
        cin >> nums[i];
    }

    isSorted(nums, 10); 
}