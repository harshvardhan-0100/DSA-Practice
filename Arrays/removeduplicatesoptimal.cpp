#include <bits/stdc++.h>
using namespace std; 

void removeDuplicates(int arr[], int n) {
    int i = 0; 

    for (int j = 1; j < n; j++) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];  
        }
        j++; 
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }

    cout << endl;

    cout << "The no. of unique elements is: " << i + 1 << endl;
}

int main() {
    int nums[10] = {1, 1, 2, 2, 2, 3, 3, 4, 4, 4};

    removeDuplicates(nums, 10); 
}