#include <bits/stdc++.h>
using namespace std; 

void getElements(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;
}

void unionOfArrays(vector<int> arr1, vector<int> arr2) {
    int m = arr1.size(); 
    int n = arr2.size(); 

    vector<int> unionArray; 

    set<int> st; 

    for (int i = 0; i < n; i++) {
        st.insert(arr2[i]); 
    }

    for (int i = 0; i < m; i++) {
        st.insert(arr1[i]);
    }

    for (auto it : st) {
        unionArray.push_back(it); 
    }

    getElements(unionArray); 
}

int main() {
    vector<int> nums1 = {1, 2, 3, 5, 6, 7, 8, 8, 10, 24, 56, 58}; 
    vector<int> nums2 = {2, 3, 6, 9, 45, 55, 58, 59, 62, 64};

    unionOfArrays(nums1, nums2); 
}