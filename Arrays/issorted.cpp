#include <bits/stdc++.h>
using namespace std; 

void isSorted(int arr[], int n) {
    // program to check if an array is sorted or not sorted
    // the array should be in ascending/increasing/non-decreasing order
    // first instinct: brute force: just check the advancing digits
    
    // my instinct says, doing this with the help of recursion works best
    // that said, i am not so good with recursions. I'll have to stick to the loops
    // damn it!
    
    int firstIndex = 0; 
    int i = 1; 
    int j = 2; 

    for (int k = 0; k < n; k++) {
        if (arr[firstIndex] < arr[i]) {
            i = j; 
            j += 1; 
        } 
        else cout << "not a sorted array!"; 
        
    }

    cout << "The array is sorted!"; 
}
int main() {

    int nums[10]; 
    for (int i = 0; i < 10; i++) {
        cin >> nums[i]; 
    }

    isSorted(nums, 10); 
}