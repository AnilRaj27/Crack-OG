#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {9, -3, 3, -1, 6, -5};

    // int maxCount = 0;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j < arr.size(); j++)
    //     {
    //         sum += arr[j];
    //         if (sum == 0)
    //             maxCount = max(j - i + 1, maxCount);
    //     }
    // }
    // cout << maxCount << endl;

    unordered_map<int, int> m;

    int maxi = 0;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum == 0)
            maxi = i + 1;
        else
        {
            if (m.find(sum) != m.end())
                maxi = max(maxi, i - m[sum]);
            else
                m[sum] = i;
        }
    }
    cout << maxi << endl;

    return 0;
}