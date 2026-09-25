#include <bits/stdc++.h>
using namespace std;

int binarySearchRecursive(vector<int> arr, int low, int high, int target)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (target == arr[mid])
        return mid;

    else if (target < arr[mid])
    {
        high = mid - 1;
        return binarySearchRecursive(arr, low, high, target);
    }
    else
    {
        low = mid + 1;
        return binarySearchRecursive(arr, low, high, target);
    }

    return -1;
}

int main()
{
    vector<int> nums = {2, 3, 5, 6, 7, 9, 10, 12, 13, 15, 17, 27};
    int target = 13;

    cout << "Position(index) of " << target << " is: " << binarySearchRecursive(nums, 0, nums.size() - 1, target);

    return 0;
}