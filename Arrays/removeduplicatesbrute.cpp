#include <bits/stdc++.h>
using namespace std; 

int main() {
    int nums[8] = {1, 2, 2, 3, 4, 4, 5, 5};

    set<int> st; 
    for (int i = 0; i < 10; i++) {
        st.insert(nums[i]); 
    }

    int index = 0; 
    for (auto it : st) {
        nums[index] = it; 
        index++; 
    }

    for (int i = 0; i < 10; i++) {
        cout << nums[i] << " "; 
    } 
    

    return index; 
}