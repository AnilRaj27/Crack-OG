#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int sum = 0;
    int max_sum = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        sum = max(sum, arr[i]);
        max_sum = max(sum, max_sum);
    }

    cout << max_sum << endl;

    return 0;
}