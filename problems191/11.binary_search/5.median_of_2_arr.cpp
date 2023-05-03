#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    if (nums2.size() < nums1.size())
        return findMedianSortedArrays(nums2, nums1);

    int n1 = nums1.size();
    int n2 = nums2.size();

    int l = 0, h = n1;

    while (l <= h)
    {
        int cut1 = (l + h) >> 1;
        int cut2 = (n1 + n2 + 1) / 2 - cut1;

        int left1 = cut1 == 0 ? INT_MIN : nums1[cut1 - 1];
        int left2 = cut2 == 0 ? INT_MIN : nums2[cut2 - 1];

        int right1 = cut1 == 0 ? INT_MAX : nums1[cut1];
        int right2 = cut2 == 0 ? INT_MAX : nums2[cut2];

        if (left1 <= right2 && left2 <= right1)
        {
            if ((n1 + n2) % 2 == 0)
                return (max(left1, left2) + min(right1, right2)) / 2.0;
            else
                return max(left1, left2);
        }
        else if (left1 > left2)
        {
            h = cut1 - 1;
        }
        else
        {
            l = cut1 + 1;
        }
    }

    return 0.0;
}

int main()
{

    vector<int> arr1 = {1, 4, 7, 10, 12};
    vector<int> arr2 = {2, 3, 6, 15};

    // Approach1: merge 2 arrays using extra vector, find the median; TC: O(M+N) , SC: O(M+N)

    // Apporach2: ; TC: O(log(min(M,N))), SC: O(1)
    int result = findMedianSortedArrays(arr1, arr2);
    cout << result << endl;

    return 0;
}