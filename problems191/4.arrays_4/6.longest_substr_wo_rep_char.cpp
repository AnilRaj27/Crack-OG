#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Approach1: 2loops & set; TC: O(N2), SC: O(N)
    string s = "abcabcbb";
    // int maxAns = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     unordered_set<int> set;
    //     for (int j = i; j < s.size(); j++)
    //     {
    //         if (set.find(s[i]) != set.end())
    //         {
    //             maxAns = max(maxAns, j - i);
    //             break;
    //         }
    //         set.insert(s[j]);
    //     }
    // }

    // Approach2: 2pointer approach & set; TC:O(2*N), SC:O(N)
    // int l = 0;
    // int r = 0;
    // set<int> set;
    // int maxAns = 0;
    // for (int r = 0; r < s.size(); r++)
    // {
    //     if (set.find(s[r]) != set.end())
    //     {
    //         while (l < r && set.find(s[r]) != set.end())
    //         {
    //             set.erase(s[l]);
    //             l++;
    //         }
    //     }
    //     set.insert(s[r]);
    //     maxAns = max(maxAns, r - l + 1);
    // }
    // cout << maxAns << endl;

    // Approach3: 2pointer approach but do take map & count elements & left index will make jumps when
    // duplicate is found
    map<char, int> m;
    int l = 0;
    int r = 0;
    int maxAns = 0;
    while (r < s.size())
    {
        if (m.find(s[r]) != m.end())
            l = max(l, m[s[r]] + 1);

        m[s[r]] = r;
        maxAns = max(maxAns, r - l + 1);
        r++;
    }
    cout << maxAns << endl;

    return 0;
}