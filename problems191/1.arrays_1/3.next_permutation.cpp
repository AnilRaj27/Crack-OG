#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> nums = {2, 3, 6, 5, 4, 1};
    int n = nums.size(), i, j;
    for (i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
            break;
    }

    if (i < 0)
    {
        reverse(nums.begin(), nums.end());
    }
    else
    {
        for (j = n - 1; j > i; j--)
        {
            if (nums[i] < nums[j])
                break;
        }
    }

    swap(nums[i], nums[j]);
    reverse(nums.begin() + i + 1, nums.end());

    for (auto &x : nums)
        cout
            << x << " ";
    cout << endl;

    return 0;
}