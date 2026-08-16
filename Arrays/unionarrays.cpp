#include <bits/stdc++.h>
using namespace std; 

void getElements(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;
}

void unionArr(vector<int> arr1, vector<int> arr2) {
    int m = arr1.size(), n = arr2.size(); 
    
    set<int> st; 

    for (int i = 0; i < m; i++) {
        st.insert(arr1[i]); 
    }

    for (int i = 0; i < n; i++) {
        st.insert(arr2[i]); 
    }

    vector<int> temp; 

    for (auto it : st) {
        temp.push_back(it); 
    }

    getElements(temp); 
}

int main() {
    vector<int> nums1 = {1, 2, 4, 4, 5, 7, 8}; 
    vector<int> nums2 = {3, 3, 6, 9, 10, 22}; 

    unionArr(nums1, nums2); 
}