#include <bits/stdc++.h>
using namespace std; 

void secondls(int arr[], int n) {
    // initializing variables
    int secondMini = 0; 
    int secondMaxi = 0; 

    // sorting the array by selection sort
    for (int i = 0; i < n; i++) {
        int min = arr[i]; 
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) swap(arr[j], arr[i]); 
        }
    }

    for (int i = n - 2; i > 1; i--) {
        if (arr[i] != arr[n - 1]) {
            secondMaxi = arr[i]; 
            break; 
        }
    }

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[0]) {
            secondMini = arr[i]; 
            break;
        }
    }

    cout << "Second largest element: " << secondMaxi << endl; 
    cout << "Second smallest element: " << secondMini << endl; 
}

int main() {
    int nums[12]; 
    for (int i = 0; i < 12; i++) {
        cin >> nums[i]; 
    }
    secondls(nums, 12); 
}