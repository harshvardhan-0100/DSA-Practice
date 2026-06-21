#include <bits/stdc++.h>
using namespace std; 

void countFreq(int arr[], int n) {
    unordered_map<int, int> mpp; 

    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++; 
    }

    for (auto x : mpp) {
        cout << x.first << " " << x.second << endl; 
    }
}

int main() {
    int nums[10]; 
    for (int i = 0; i < 10; i++) {
        cin >> nums[i]; 
    }

    countFreq(nums, 10); 
}