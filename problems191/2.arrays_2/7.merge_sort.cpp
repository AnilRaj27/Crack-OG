#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int l, int mid, int r)
{
    int i = l;       // starting index of left half of arr
    int j = mid + 1; // starting index of right half of arr
    int f = l;       // index used to transfer elements in temporary array
    int temp[r - l]; // temporary array

    // storing elements in the temporary array in a sorted manner//

    while (i <= mid && j <= r)
    {
        if (arr[i] < arr[j])
        {
            temp[f] = arr[i];
            i++;
        }
        else
        {
            temp[f] = arr[j];
            j++;
        }
        f++;
    }

    // if elements on the left half are still left //
    if (i > mid)
    {
        while (j <= r)
        {
            temp[f] = arr[j];
            f++;
            j++;
        }
    }
    else
    {
        while (i <= mid)
        {
            temp[f] = arr[i];
            f++;
            i++;
        }
    }

    // transfering all elements from temporary to arr //
    for (int f = l; f <= r; f++)
        arr[f] = temp[f];
}

void mergeSort(vector<int> &arr, int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main()
{
    vector<int> arr = {3, 2, 8, 5, 1, 4, 23};
    int n = arr.size();

    mergeSort(arr, 0, n - 1);

    for (auto &x : arr)
        cout << x << endl;

    return 0;
}