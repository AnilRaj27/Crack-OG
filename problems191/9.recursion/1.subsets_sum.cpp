#include <bits/stdc++.h>
using namespace std;

void subset(vector<int> &arr, int i, int sum, int n, vector<int> &ans)
{
    if (i == n)
    {
        ans.push_back(sum);
        return;
    }

    // pick
    subset(arr, i + 1, sum + arr[i], n, ans);

    // not picking
    subset(arr, i + 1, sum, n, ans);
}

int main()
{
    vector<int> arr = {3, 1, 2};
    vector<int> ans = {};
    subset(arr, 0, 0, arr.size(), ans);

    for (auto &x : ans)
        cout << x << " ";
    cout << endl;

    return 0;
}