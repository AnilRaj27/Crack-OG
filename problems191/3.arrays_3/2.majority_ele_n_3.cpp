#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 1, 1, 3, 3, 2, 2, 2};

    // moore's voting algorithm extended
    vector<int> counts = {0, 0};
    vector<int> candidates = {-1, -1};
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == candidates[0])
            counts[0]++;
        else if (arr[i] == candidates[1])
            counts[1]++;
        else if (counts[0] == 0)
        {
            candidates[0] = arr[i];
            counts[0] = 1;
        }
        else if (counts[1] == 0)
        {
            candidates[1] = arr[i];
            counts[1] = 1;
        }
        else
        {
            counts[0]--;
            counts[1]--;
        }
    }

    cout << candidates[0] << " " << candidates[1] << endl;

    vector<int> ans = {};
    counts = {0, 0};
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == candidates[0])
            counts[0]++;
        else if (arr[i] == candidates[1])
            counts[1]++;
    }

    if (counts[0] > arr.size() / 3)
        ans.push_back(candidates[0]);
    if (counts[1] > arr.size() / 3)
        ans.push_back(candidates[1]);

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}