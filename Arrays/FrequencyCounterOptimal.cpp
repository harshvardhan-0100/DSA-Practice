#include <bits/stdc++.h>
using namespace std;

class FrequencyCounter
{
public:
    void countFreq(int arr[], int n)
    {
        unordered_map<int, int> mpp;

        for (int i = 0; i < n; i++)
        {
            mpp[arr[i]]++;
        }

        // logging in the values
        int maxFreq = 0, maxEle = 0;
        int minFreq = n, minEle = 0;

        for (auto x : mpp)
        {
            if (x.second > maxFreq)
            {
                maxEle = x.first;
                maxFreq = x.second;
            }
            if (x.second < minFreq)
            {
                minEle = x.first;
                minFreq = x.second;
            }
        }
        cout << "max frequency element: " << maxEle << endl; 
        cout << "min frequency element: " << minEle << endl; 
    }
};

int main()
{
    int nums[12]; 
    for (int i = 0; i < 12; i++) {
        cin >> nums[i]; 
    }

    FrequencyCounter fc; 
    fc.countFreq(nums, 12); 
    
}