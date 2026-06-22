#include <bits/stdc++.h>
using namespace std; 

void secondls(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int min = arr[i]; 
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) swap(arr[j], arr[i]); 
        }
    }

    cout << "Second largest element: " << arr[n - 2] << endl; 
    cout << "Second smallest element: " << arr[1] << endl; 
}
int main() {
    int nums[12]; 
    for (int i = 0; i < 12; i++) {
        cin >> nums[i]; 
    }
     secondls(nums, 12); 
}