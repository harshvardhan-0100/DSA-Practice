#include <bits/stdc++.h>
using namespace std; 

vector<int> rotateArray(vector<int> arr, int k) {
    int n = arr.size(); 
    int count = k; 

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;

    int last = arr[n - 1]; 

    for (int i = n - 1; i >= 1; i--) {
        arr[i] = arr[i - 1]; 
    }

    arr[0] = last; 

    count--; 

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl; 

    return arr; 
}

int main() {
    vector<int> test = {1, 2, 3, 4, 5}; 

    int count; 
    cout << "Enter count: ";
    cin >> count; 

    for (int i = 0; i < count; i++) {
        rotateArray(test, count); 
    }
}