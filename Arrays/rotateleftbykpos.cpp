#include <bits/stdc++.h>
using namespace std; 

void getElements(vector<int> a) {
    int n = a.size(); 
    for (int i = 0; i < n; i++) {
        cout << a[i] << " "; 
    }
    cout << endl;
}

void leftRotate(vector<int> nums, int k) {
    vector<int> temp; 

    int n = nums.size(); 

    cout << "Before rotation: "; 
    getElements(nums); 

    for (int i = 0; i < k; i++) {
        temp.push_back(nums[i]); 
    }

    cout << "The temporary array: "; 
    getElements(temp); 

    for (int i = k; i < n; i++) {
        nums[i - k] = nums[i]; 
    }

    for (int i = n - k; i < n; i++) {
        nums[i] = temp[i - (n - k)];
    }

    getElements(nums); 

}

int main() {
    cout << "Rotating array to the left by k places: " << endl;

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 

    leftRotate(nums, 3); 
}