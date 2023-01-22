#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3;
    int n = 3;

    int a = m - 1, b = n - 1;
    int size = m + n - 1;

    // cout << a << endl;
    // cout << b << endl;
    // cout << size << endl;

    while (a >= 0 && b >= 0)
    {
        if (nums1[a] > nums2[b])
        {
            nums1[size] = nums1[a];
            a--;
            size--;
        }
        else
        {
            nums1[size] = nums2[b];
            b--;
            size--;
        }
    }

    while (a >= 0)
    {
        nums1[size] = nums1[a];
        a--;
        size--;
    }
    while (b >= 0)
    {
        nums1[size] = nums2[b];
        b--;
        size--;
    }

     for (auto &x : nums1)
        cout << x << " ";
    cout << endl;

    return 0;
}
