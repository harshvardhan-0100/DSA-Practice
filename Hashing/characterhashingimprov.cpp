#include <bits/stdc++.h>
using namespace std; 

int main() {
    string s; 
    cin >> s; 

    int freq[52] = {0}; 
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            freq[s[i] - 'a']++;
        }
        if (s[i] >= 'A' && s[i] <= 'Z') {
            freq[s[i] - 'A' + 26]++;
        }
    }

    int q; 
    cin >> q; 
    while (q--) {
        char c;
        cin >> c; 
        if (c >= 'a' && c <= 'z')  {
            cout << freq[c - 'a'] << endl;
        }
        if (c >= 'A' && c <= 'Z') {
            cout << freq[c - 'A' + 26] << endl;
        }
    }
}