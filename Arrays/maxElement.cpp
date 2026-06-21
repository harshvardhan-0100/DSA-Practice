#include <bits/stdc++.h>
using namespace std; 

int main() {
    int nums[12]; 
    for (int i = 0; i < 12; i++) {
        cin >> nums[i]; 
    }

    int maxEle = nums[0]; 
    for (int i = 1; i < 12; i++) {
        if (nums[i] > maxEle) maxEle = nums[i];  
    }

    cout << "max element of array is: " << maxEle << endl;
}