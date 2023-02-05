#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {100, 200, 1, 3, 2, 4};
    // set<int> s;
    // Approach1: using set, it is worst approach as the insertion of elements takes TC: O(nlogn), SC: O(n)
    // for (auto &x : arr)
    //     s.insert(x);
    // int prevNum = *s.begin();
    // int maxStreakCount = 1;
    // int count = 1;
    // for (auto it = s.begin(); it != s.end(); it++)
    // {
    //     if (it == s.begin())
    //     {
    //         continue;
    //     }
    //     if ((*it - prevNum) == 1)
    //         count++;
    //     else
    //         count = 1;
    //     maxStreakCount = max(count, maxStreakCount);
    //     prevNum = *it;
    // }

    // Approach2: sorting
    sort(arr.begin(), arr.end());
    int maxStreakCount = 1;
    int count = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        if ((arr[i + 1] - arr[i]) == 1)
            count++;
        else
            count = 1;
        maxStreakCount = max(count, maxStreakCount);
    }

    // Approach3: unordererd set
    unordered_set<int> s;
    for (auto &x : arr)
        s.insert(x);
    int longestSteak = 0;
    for (int num : arr)
    {
        if (!s.count(num - 1))
        {
            int currentNum = num;
            int currentStreak = 1;

            while (s.count(currentNum + 1))
            {
                currentNum++;
                currentStreak++;
            }
            longestSteak = max(currentStreak, longestSteak);
        }
    }

    cout << longestSteak << endl;

    return 0;
}