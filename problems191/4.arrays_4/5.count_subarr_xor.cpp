#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {4, 2, 2, 6, 4};
    int target = 6;

    // Approach1: 2 loops, TC: O(N2), SC: O(1)

    // Approach2: prefix sum & hashmap, TC: O(N), SC: O(N) {doubt: TC can also be O(NlogN), How ?}
    int xorVal = 0;
    int count = 0;
    unordered_map<int, int> freq;
    for (int i = 0; i < arr.size(); i++)
    {
        xorVal ^= arr[i];
        if (xorVal == target)
            count++;

        if (freq.find(xorVal ^ target) != freq.end())
            count = count + freq[xorVal ^ target];

        freq[xorVal] = freq[xorVal] + 1;
    }
    cout << count << endl;

    return 0;
}