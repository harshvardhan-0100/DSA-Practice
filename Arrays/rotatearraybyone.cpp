#include <bits/stdc++.h>
using namespace std; 

void rotateByOne(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;

    int first_element = arr[0]; 

    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1]; 
    }

    arr[n - 1] = first_element; 

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;
}

int main() {
    int nums[5] = {1, 2, 3, 4, 5}; 
    
    rotateByOne(nums, 5); 
}