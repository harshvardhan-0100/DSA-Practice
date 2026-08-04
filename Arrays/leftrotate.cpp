#include <bits/stdc++.h>
using namespace std; 

void getElements(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;
}

void leftRotate(vector<int> arr) {
    getElements(arr);

    int n = arr.size(); 

    for (int i = 0; i < (n - 1); i++) {
        arr[i] = arr[i + 1]; 
    }

    arr[n - 1] = arr[0]; 

    getElements(arr); 
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 89, 97, 120}; 

    leftRotate(nums); 

}