#include <bits/stdc++.h>
using namespace std;

// Approach1: Recursion, O(N!*N), SC: O(N)+O(N)
void permutations(vector<int> &arr, vector<vector<int>> &ans, int freq[], vector<int> &ds)
{
    if (ds.size() == arr.size())
    {
        ans.push_back(ds);
        return;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (!freq[i])
        {
            ds.push_back(arr[i]);
            freq[i] = 1;
            permutations(arr, ans, freq, ds);
            freq[i] = 0;
            ds.pop_back();
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans = {};
    vector<int> ds;

    int freq[arr.size()];
    for (int i = 0; i < arr.size(); i++)
        freq[i] = 0;
    permutations(arr, ans, freq, ds);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}