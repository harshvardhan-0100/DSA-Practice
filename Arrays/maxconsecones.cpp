#include <bits/stdc++.h> 
using namespace std; 

int maxOnes(vector<int> arr) {
    int n = arr.size(); 

    int count = 0; 
    int max_count = 0; 

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count += 1; 
        }
        if (arr[i] == 0) {
            count = 0; 
        }
        max_count = max(count, max_count); 
    }

    cout << max_count << endl; 
    return max_count; 
}

int main() {
    vector<int> bin = {1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1}; 
    maxOnes(bin); 
}