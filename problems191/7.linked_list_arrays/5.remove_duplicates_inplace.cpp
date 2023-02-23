#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Approach1: Hashset; TC: O(N*logN),SC: O(N)

    // Approach2: 2pointers; TC: O(N), SC: O(1)
    vector<int> nums = {1, 1, 2};

    int j = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] != nums[i + 1])
            nums[j++] = nums[i];
    }
    nums[j++] = nums[nums.size() - 1];

    for (auto x : nums)
        cout << x << " ";
    cout << endl;

    return 0;
}
