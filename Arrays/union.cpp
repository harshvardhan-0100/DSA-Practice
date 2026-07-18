#include <bits/stdc++.h>
using namespace std; 

void getElements(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;
}

void unionArray(vector<int> arr1, vector<int> arr2) {
    set<int> st; 

    for (int i = 0; i < arr1.size(); i++) {
        st.insert(arr1[i]); 
    }
    for (int i = 0; i < arr2.size(); i++) {
        st.insert(arr2[i]); 
    }

    vector<int> unionA; 

    int index = 0; 
    for (auto it : st) {
        unionA.push_back(it); 
        index++; 
    }

    getElements(unionA); 
}

int main() {
    vector<int> a1 = {1, 2, 2, 3, 4, 8, 99, 102, 102}, a2 = {1, 45, 99, 114, 199}; 

    unionArray(a1, a2); 
}