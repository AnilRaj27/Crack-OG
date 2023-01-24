#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {100, 200, 1, 3, 2, 4};
    set<int> s;

    // for (int i = 0; i < s.size(); i++)
    // {
    //     if(s[i]<s)
    // }
    // s

    sort(arr.begin(), arr.end());
    int longestStreak = 1;
    int maxStreak = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i + 1] - arr[i] == 1)
        {
            longestStreak++;
            maxStreak = max(longestStreak, maxStreak);
        }
        else
        {
            longestStreak = 1;
        }
    }
    cout << maxStreak << endl;

    return 0;
}