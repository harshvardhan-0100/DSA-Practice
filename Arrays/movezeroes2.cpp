#include <bits/stdc++.h>
using namespace std; 

void getElements(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;
}

void moveZeroes(vector<int> nums) {
    int n = nums.size(); 

    vector<int> temp;

    for (int i = 0; i < n; i++) {
        if (nums[i] == 0) {
            temp.push_back(nums[i]); 
        }

        if (nums[i] == 0) {
            for (int j = i; j < n; j++) {
                if (nums[j] != 0) {
                    swap(nums[i], nums[j]); 
                    break; 
                }
            }
        }
    }

    getElements(nums); 
}

int main() {
    vector<int> nums = {1, 0, 0, 2, 0, 3, 0, 4, 0, 9, 0, 0, 5};

    moveZeroes(nums); 
}