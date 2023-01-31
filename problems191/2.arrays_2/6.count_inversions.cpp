#include <bits/stdc++.h>
using namespace std;

int merge(vector<int> arr, int temp[], int l, int mid, int r)
{
    int i = l;
    int j = mid;
    int k = l;
    int invCount = 0;

    while ((i <= mid) && (j <= r))
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[l++];
        else
        {
            temp[k++] = arr[j++];
            invCount = invCount + (mid - i);
        }
    }

    while (i <= mid - 1)
        temp[k++] = arr[i++];

    while (j <= r)
        temp[k++] = arr[j++];

    for (int i = l; i <= r; i++)
        arr[i] = temp[i];

    return invCount;
}

int mergeSort(vector<int> arr, int temp[], int l, int r)
{
    int mid, invCount = 0;

    if (r > l)
    {
        mid = l + (r - l) / 2;
        invCount += mergeSort(arr, temp, l, mid);
        invCount += mergeSort(arr, temp, mid + 1, r);
        invCount += merge(arr, temp, l, mid + 1, r);
    }

    return invCount;
}

int main()
{
    vector<int> arr = {5, 3, 2, 4, 1};
    int n = arr.size();
    int temp[n];

    int ans = mergeSort(arr, temp, 0, n - 1);

    cout << ans << endl;

    return 0;
}