#include <bits/stdc++.h>
#include <vector>
using namespace std;

void countFreq(int arr[], int n) {
    // visited array for elements already covered
    vector<bool> visited(n, false); 

    for (int i = 0; i < n; i++) {
        if (visited[i] == true) continue; // continue if already covered

        int count = 1; // if element not already covered, just increment it
        visited[i] = true; 
        for (int j = i + 1; j < n; j++ ) {
            if (arr[i] == arr[j]) {
                visited[j] = true; 
                count++; 
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}
int main() {
    int nums[10]; 
    for (int i = 0; i < 10; i++ ) {
        cin >> nums[i]; 
    }

    countFreq(nums, 10); 
}