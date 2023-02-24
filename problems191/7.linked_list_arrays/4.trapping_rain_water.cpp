#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Approach 1
    // For each i, find the left max and right max and do accordingly
    // O(N2), O(1)

    // Approach2: prefix sum array & suffix sum array; TC:O(2*N), SC: O(2*N)
    vector<int> nums = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    vector<int> prefixSum(nums.size());
    vector<int> suffixSum(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        
    }

    return 0;
}
