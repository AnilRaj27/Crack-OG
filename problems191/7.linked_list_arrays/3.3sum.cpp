#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans;

    // Approach1: 3loops
    // set<vector<int>> s;
    // for (int i = 0; i < nums.size() - 2; i++)
    // {
    //     for (int j = i + 1; j < nums.size() - 1; j++)
    //     {
    //         for (int k = j + 1; k < nums.size(); k++)
    //         {
    //             if (nums[i] + nums[j] + nums[k] == 0)
    //                 s.insert({nums[i], nums[j], nums[k]});
    //         }
    //     }
    // }

    // Approach2: 2pointers & skip duplicates
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 2; i++)
    {
        if (i == 0 || (i > 0 && nums[i] != nums[i - 1]))
        {
            int sum = 0 - nums[i];
            int low = i + 1;
            int high = nums.size() - 1;
            while (low < high)
            {
                if (nums[low] + nums[high] == sum)
                {
                    ans.push_back({nums[i], nums[low], nums[high]});

                    while (low < high && nums[low] == nums[low + 1])
                        low++;
                    while (low < high && nums[high] == nums[high - 1])
                        high--;
                    low++;
                    high--;
                }
                else if (nums[low] + nums[high] < sum)
                    low++;
                else
                    high--;
            }
        }
    }

    return 0;
}
