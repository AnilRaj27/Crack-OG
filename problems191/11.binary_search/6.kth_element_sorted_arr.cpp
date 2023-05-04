#include <bits/stdc++.h>
using namespace std;

int kthElement(vector<int> &arr1, vector<int> &arr2, int n, int m, int k)
{
    if (n > m)
        kthElement(arr2, arr1, m, n, k);

    int l = max(0, k - m), h = min(k, n);

    while (l <= h)
    {
        int cut1 = (l + h) >> 1;
        int cut2 = k - cut1;

        int l1 = cut1 == 0 ? INT_MIN : arr1[cut1 - 1];
        int l2 = cut2 == 0 ? INT_MIN : arr2[cut2 - 1];
        int r1 = cut1 == n ? INT_MAX : arr1[cut1];
        int r2 = cut2 == m ? INT_MAX : arr2[cut2];

        if (l1 <= r2 && l2 <= r1)
        {
            return max(l1, l2);
        }
        else if (l2 > l2)
        {
            h = cut1 - 1;
        }
        else
        {
            l = cut1 + 1;
        }
    }
    return 1;
}

int main()
{

    // Approach2: make cuts;

    vector<int> arr1 = {2, 3, 6, 7, 9};
    vector<int> arr2 = {1, 4, 8, 10};
    int k = 5;
    int result = kthElement(arr1, arr2, arr1.size(), arr2.size(), k);
    cout << result << endl;

    return 0;
}