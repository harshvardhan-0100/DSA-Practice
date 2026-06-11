#include <bits/stdc++.h>
using namespace std; 

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int mini = i; 
        for (int j = 0; j < n; j++) {
            if (arr[j] < arr[mini]) swap(arr[j], arr[mini]); 
        }
    }
}
int main() {
    int n; 
    cin >> n; 

    int arr[n]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    selectionSort(arr, n); 

    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t"; 
    }
}