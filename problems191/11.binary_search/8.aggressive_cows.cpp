#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &arr, int n, int cows, int minDist)
{
    int countCows = 1;
    int lastPlacedCow = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - lastPlacedCow >= minDist)
        {
            countCows++;
            lastPlacedCow = arr[i];
        }
    }

    if (countCows >= cows)
        return true;
    return false;
}

int main()
{
    vector<int> arr = {1, 2, 8, 4, 9};
    int n = 5;
    int cows = 3;

    sort(arr.begin(), arr.end());

    int low = 1, high = arr[n - 1] - arr[0];

    while (low <= high)
    {
        int mid = (low + high) >> 1;

        if (isPossible(arr, n, cows, mid))
            low = mid + 1;
        else
            high = mid - 1;
    }

    return 0;
}