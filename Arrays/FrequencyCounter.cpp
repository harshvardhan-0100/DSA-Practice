#include <bits/stdc++.h>
using namespace std; 

class freqCounter{
public: 
    void countFreq(int arr[], int n) {
        vector<bool> visited(n, false); 
        
        // logging in the data
        int maxFreq = 0, minFreq = n; 
        int maxEle = 0, minEle = 0; 

        for (int i = 0; i < n; i++) {
            if (visited[i] == true) continue; 

            visited[i] = true; 
            int count = 1; 
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    visited[j] == true; 
                    count++; 
                }
            }
            // update the data fields
            if (count > maxFreq) {
                maxFreq = count;
                maxEle = arr[i];
            }  
            if (count < minFreq) {
                minFreq = count;
                minEle = arr[i];
            }
        }
        // output the result
        cout << "Highest frequency element: " << maxEle << "\n"; 
        cout << "Lowest frequency element: " << minEle << "\n";
    }
};
int main() {
    int nums[10]; 
    for (int i = 0; i < 10; i++)
    {
        cin >> nums[i]; 
    }

    freqCounter fc; 
    fc.countFreq(nums, 10); 
    
}