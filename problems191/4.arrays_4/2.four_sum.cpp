#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    int target = 9;

    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        int j = i + 1;
        int k = j + 1;
        int diff = target - (arr[i] + arr[j] + arr[k]);

        
    }

    for (auto &x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}