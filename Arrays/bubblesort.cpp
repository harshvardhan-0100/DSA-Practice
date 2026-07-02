#include <bits/stdc++.h>
using namespace std; 

int main() {
    int n; 
    cin >> n; 

    int nums[n]; 
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; 
    }

    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (nums[j] > nums[j + 1]) swap(nums[i], nums[i + 1]);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << nums[i] << "\t"; 
    }
}