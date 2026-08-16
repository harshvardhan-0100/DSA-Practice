#include <bits/stdc++.h>
using namespace std; 

void getElements(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;
}

void unionOpt(vector<int> arr1, vector<int> arr2) {
    int m = arr1.size(), n = arr2.size(); 

    vector<int> Union; 

    int i = 0, j = 0; 
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            if (Union.empty() || Union.back() != arr1[i]) {
                Union.push_back(arr1[i]); 
            }
            i++; 
        }

        else if (arr1[i] > arr2[j]) {
            if (Union.empty() || Union.back() != arr2[j]) {
                Union.push_back(arr2[j]); 
            }
            j++; 
        }

        else {
            if (Union.empty() || Union.back() != arr1[i]) {
                Union.push_back(arr1[i]); 
            }
            i++; 
            j++; 
        }
    }

    while (i < n) {
        if (Union.empty() || Union.back() != arr1[i]) {
            Union.push_back(arr1[i]); 
        }
        i++; 
    }

    while (j < m) {
        if (Union.empty() || Union.back() != arr2[j]) {
                Union.push_back(arr2[j]); 
        }
        j++; 
    }

    getElements(Union); 
}

int main() {
    vector<int> nums1 = {1, 2, 4, 4, 5, 7, 8}; 
    vector<int> nums2 = {3, 3, 6, 9, 10, 22}; 

    unionOpt(nums1, nums2); 
}