#include <bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> &arr, int beg, int end)
{
    if (beg >= end)
        return arr;
    swap(arr[beg], arr[end]);
    return reverse(arr, beg + 1, end - 1);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> result = reverse(arr, 0, arr.size() - 1);

    for (auto &x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}