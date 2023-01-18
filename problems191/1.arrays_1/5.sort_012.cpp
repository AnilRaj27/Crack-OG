#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {2, 0, 2, 1, 1, 0};

    int low = 0, mid = 0, high = arr.size() - 1;

    while (mid <= high)
    {
        if (mid == 0)
        {
            swap(arr[low], arr[high]);
            low++;
            mid++;
        }
        else if (mid == 1)
            mid++;
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    // int j = 0;
    // int k;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (arr[j] != 0 && arr[i] == 0)
    //     {
    //         swap(arr[i], arr[j]);
    //         k = j;
    //         j = i;
    //     }
    // }

    // j = k + 1;
    // for (int i = k + 1; i < arr.size(); i++)
    // {
    //     if (arr[j] != 1 && arr[i] == 1)
    //     {
    //         swap(arr[i], arr[j]);
    //         j = i;
    //     }
    // }

    for (auto &x : arr)
        cout << x << " ";

    cout << endl;

    return 0;
}