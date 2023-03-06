#include <bits/stdc++.h>
using namespace std;

void combinationSum(int index, int target, vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans)
{
    if (target == 0)
    {
        ans.push_back(ds);
        return;
    }

    for (int i = index; i < nums.size(); i++)
    {
        if (i > index && nums[i] == nums[i - 1])
            continue;
        if (nums[i] > target)
            break;
        ds.push_back(nums[i]);
        combinationSum(i + 1, target - nums[i], nums, ds, ans);
        ds.pop_back();
    }
}

int main()
{
    vector<int> nums = {10, 1, 2, 7, 6, 1, 5};
    vector<vector<int>> ans;
    vector<int> ds = {};
    int target = 8;

    sort(nums.begin(), nums.end());
    combinationSum(0, target, nums, ds, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << "";
        }
        cout << endl;
    }

    return 0;
}