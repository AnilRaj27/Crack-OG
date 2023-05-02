#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    int target = 0;

    int low = 0;
    int high = arr.size() - 1;

    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) >> 1;

        if (arr[mid] == target)
        {
            ans = mid;
            break;
        }

        if (arr[low] <= arr[high])
        {
            if (target >= arr[low] && target <= arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else
        {
            if (target >= arr[mid] && target <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    cout << ans << endl;

    return 0;
}