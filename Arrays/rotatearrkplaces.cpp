#include <bits/stdc++.h>
using namespace std; 

void rotateArr(vector<int> arr, int k) {
    int n = arr.size(); 

    int j = 0; 
    for (int i = 0; i < k; i++) {
        arr[i] = arr[i + 1]; 
    }
}

int main() {

}