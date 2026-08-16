#include <bits/stdc++.h>
using namespace std; 

void getElements(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;
}

void unionArrMap(vector<int> arr1, vector<int> arr2) {
    int m = arr1.size(), n = arr2.size(); 
    vector<int> Union; 

    map<int, int> mpp; 

    for (int i = 0; i < m; i++) {
        mpp[arr1[i]] += 1; 
    }

    for (int i = 0; i < n; i++) {
        mpp[arr2[i]] += 1; 
    }

    for (auto it : mpp) {
        Union.push_back(it.first); 
    }

    getElements(Union); 
}

int main() {
    vector<int> nums1 = {1, 2, 4, 4, 5, 7, 8}; 
    vector<int> nums2 = {3, 3, 6, 9, 10, 22}; 

    unionArrMap(nums1, nums2); 
}