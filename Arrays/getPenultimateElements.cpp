#include <bits/stdc++.h>
using namespace std; 

void getElements(int arr[], int n) {
    int mini = INT_MAX, maxi = INT_MIN, sSmallest = INT_MAX, sLargest = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxi) {
            maxi = arr[i]; 
        }
        if (arr[i] < mini) {
            mini = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > sLargest && arr[i] < maxi) {
            sLargest = arr[i]; 
        }
        if (arr[i] < sSmallest && arr[i] > mini) {
            sSmallest = arr[i];
        }
    }

    cout << "Smallest element: " << mini << endl;
    cout << "Largest element: " << maxi << endl;
    cout << "Second Smallest element: " << sSmallest << endl;
    cout << "Second Largest element: " << sLargest << endl;
}

int main() {
    int nums[10] = {78, 96, 52, 63, 10, 89, 45, 14, 73, 20};

    getElements(nums, 10);
}