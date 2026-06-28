#include <bits/stdc++.h>
using namespace std; 


int main() {
    // program to effectively and elegantly store frequencies of elements of a string

    string s; 
    cin >> s; 

    unordered_map<char, int> freq; 
    for (const char c : s) {
        freq[c]++; 
    }

    int q; 
    cin >> q; 
    while (q--) {
        char ch; 
        cin >> ch; 
        // fetch
        cout << freq[ch] << endl;
    }
}