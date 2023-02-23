#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Approach1
    vector<int> nums = {1, 1, 0, 1, 1, 1};

    int maxCount = 0;
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
            count++;
        else
            count = 0;
        maxCount = max(count, maxCount);
    }

    return maxCount;
}
