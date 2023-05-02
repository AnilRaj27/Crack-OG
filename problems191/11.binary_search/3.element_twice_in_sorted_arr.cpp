#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 8, 8};

    // Approach1: use xor, TC: O(N)

    // Approach2: break point; right half: {1st instance->odd index, 2nd instance->even index};
    // left half: {1st instance->even index, 2nd instance->odd index}
    int low = 0;
    int high = arr.size() - 2;

    while (low <= high)
    {
        int mid = (low + high) >> 1;
        if (arr[mid] == arr[mid ^ 1])
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << arr[low] << endl;

    return 0;
}