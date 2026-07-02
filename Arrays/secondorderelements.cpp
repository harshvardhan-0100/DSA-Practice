#include <bits/stdc++.h>
using namespace std;

void secondSmallest(int arr[], int n)
{
    // handling the edge cases
    if (n < 2)
        cout << -1 << endl;

    int small = INT_MAX;
    int secondsmall = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            secondsmall = small;
            small = arr[i];
        }

        if (arr[i] < secondsmall && arr[i] != small) // or we could say (arr[i] < secondsmall && arr[i] > small) but that would yield no significant difference
        {
            secondsmall = arr[i];
        }
    }

    cout << "Smallest: " << small << endl;
    cout << "Second smallest: " << secondsmall << endl; 
}

void secondlargest(int arr[], int n)
{
    int large = INT_MIN;
    int secondlarge = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            secondlarge = large;
            large = arr[i];
        }

        if (arr[i] > secondlarge && arr[i] != large) // equivalently: (arr[i] > secondlarge && arr[i] < large)
        {
            secondlarge = arr[i];
        }
    }

    cout << "Largest: " << large << endl;
    cout << "second largest: " << secondlarge << endl; 
}

int main()
{
    int nums[10] = {52, 67, 89, 10, 100, 89, 43, 51, 77, 22};

    secondSmallest(nums, 10); 
    secondlargest(nums, 10); 
}