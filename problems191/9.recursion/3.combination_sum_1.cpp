#include <bits/stdc++.h>
using namespace std;

void combinationSum(int index, int target, vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans)
{
    if (index == nums.size())
    {
        if (target == 0)
        {
            ans.push_back(ds);
        }
        return;
    }
    if (nums[index] <= target)
    {
        ds.push_back(nums[index]);
        combinationSum(index, target - nums[index], nums, ds, ans);
        ds.pop_back();
    }

    combinationSum(index + 1, target, nums, ds, ans);
}

int main()
{
    vector<int> nums = {2, 3, 6, 7};
    vector<vector<int>> ans;
    vector<int> ds = {};
    int target = 7;

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