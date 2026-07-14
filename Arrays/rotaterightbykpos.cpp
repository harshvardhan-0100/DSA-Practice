#include <bits/stdc++.h>
using namespace std; 

void getElements(vector<int> a) {
    int n = a.size(); 
    for (int i = 0; i < n; i++) {
        cout << a[i] << " "; 
    }
    cout << endl;
}

void rightRotate(vector<int> nums, int k) {
    int n = nums.size(); 
    
    k = k % n; 

    cout << "Before rotation: "; 
    getElements(nums); 

    vector<int> temp; 

    for (int i = n - k; i < n; i++) {
        temp.push_back(nums[i]); 
    }
    cout << "The temporary array: "; 
    getElements(temp); 

    for (int i = n - 1; i >= k; i--) {
        nums[i] = nums[i - k];  
    }

    for (int i = 0; i < k; i++) {
        nums[i] = temp[i]; 
    }

    cout << "After rotation: "; 
    getElements(nums); 


}

int main() {
    cout << "Program to right rotate an array by k places: "; 

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    rightRotate(nums, 3); 
}