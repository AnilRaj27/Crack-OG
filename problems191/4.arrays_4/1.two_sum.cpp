#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;

    map<int, int> m;
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        int diff = target - arr[i];
        if (m.find(diff) != m.end())
            ans = {i, m[diff]};
        else
            m[arr[i]] = i;
    }

    cout << arr[0] << " " << arr[1] << endl;

    return 0;
}