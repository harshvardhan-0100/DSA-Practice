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

void unionArrayOptimal(vector<int> arr1, vector<int> arr2)
{
    int n = arr1.size();
    int m = arr2.size();

    vector<int> unionArray;

    int i = 0; // pointer for the first array arr1
    int j = 0; // pointer for the second array arr2

    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            if (unionArray.back() != arr1[i] || unionArray.size() == 0)
            {
                unionArray.push_back(arr1[i]);
            }
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            if (unionArray.back() != arr2[j] || unionArray.size() == 0)
            {
                unionArray.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (j < m)
    {
        if (unionArray.back() != arr2[j] || unionArray.size() == 0)
        {
            unionArray.push_back(arr2[j]);
        }
        j++;
    }

    while (i > n)
    {
        if (unionArray.back() != arr1[i] || unionArray.size() == 0)
        {
            unionArray.push_back(arr1[i]);
        }
        i++;
    }

    getElements(unionArray);
}

int main()
{
    vector<int> a1 = {1, 2, 3, 4, 5};
    vector<int> a2 = {2, 3, 4, 4, 5};

    unionArrayOptimal(a1, a2);
}