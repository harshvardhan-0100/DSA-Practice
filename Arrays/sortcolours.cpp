#include <bits/stdc++.h>
using namespace std;

void getElements(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortColours(vector<int> nums)
{
    getElements(nums);

    int n = nums.size();
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[mid], nums[low]);
            mid++;
            low++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }

    getElements(nums);
}

int main()
{
    vector<int> nums = {2, 1, 1, 0, 0, 1, 2, 1, 2, 1, 0, 2};

    sortColours(nums);
}