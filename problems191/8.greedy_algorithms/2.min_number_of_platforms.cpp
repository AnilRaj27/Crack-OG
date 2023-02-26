#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 6;
    vector<int> arr = {900, 945, 955, 1100, 1500, 1800};
    vector<int> dep = {920, 1200, 1130, 1150, 1900, 2000};

    // Approach1: 2for loops
    int ans = 1;
    for (int i = 0; i <= n - 1; i++)
    {
        int count = 1;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if ((arr[i] >= arr[j] && arr[i] <= dep[j]) || (arr[j] >= arr[i] && arr[j] <= dep[i]))
                count++;
        }
        ans = max(count, ans);
    }

    // Approach2: sort both the timings; TC: O(2*LogN)+O(2*N), SC: O(1)
    sort(arr.begin(), arr.begin() + n);
    sort(dep.begin(), dep.begin() + n);

    int platforms = 1;
    int maxCount = 1;
    int i = 1, j = 0;
    while (i < n && j < n)
    {
        if (arr[i] <= dep[j])
        {
            platforms++;
            i++;
        }
        else
        {
            platforms--;
            j++;
        }
        maxCount = max(platforms, maxCount);
    }

    return maxCount;
}