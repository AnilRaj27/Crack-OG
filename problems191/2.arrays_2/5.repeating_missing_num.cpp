#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Approach1: freq arr, TC: O(N), SC: O(N)
    vector<int> arr = {1, 2, 2, 4};
    // int n = arr.size() + 1;
    // vector<int> substitute(n, 0);
    // vector<int> ans = {0, 0};
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     substitute[arr[i]]++;
    // }

    // for (int i = 1; i <= arr.size(); i++)
    // {
    //     if (substitute[i] > 1)
    //     {
    //         ans[0] = i;
    //     }
    //     if (substitute[i] == 0)
    //     {
    //         ans[1] = i;
    //     }
    // }
    // cout << ans[0] << " " << ans[1] << endl;

    // Approach2: math sum of elements & sum of squares of elements.
    // Drawbacks, for large numbers TC exceeds, TC: O(N), SC: O(1)
    // n*(n+1)/2-sum of arr (x-y), n(n+1)(2n+1)/6-sum of squares of arr(x^2-y^2) => calci (x+y)
    // ((x+y)-sumDiff)/2 & ((x+y)+sumDiff)/2
    // long long int n = arr.size();
    // long long int sum = 0;
    // long long int square = 0;
    // vector<int> ans;
    // for (long long int i = 0; i < arr.size(); i++)
    // {
    //     sum += (long long)arr[i];
    //     square += (long long)arr[i] * (long long)arr[i];
    // }

    // long long int sumDiff = n * (n + 1) / 2 - sum;
    // long long int squareSumDiff = n * (n + 1) * (2 * n + 1) / 6 - square;
    // long long int val = squareSumDiff / sumDiff;
    // cout << squareSumDiff << " " << sumDiff << endl;

    // ans.push_back((val - sumDiff) / 2);
    // ans.push_back((val + sumDiff) / 2);

    // cout << ans[0] << " " << ans[1] << endl;

    // Approach3: xor of given array & 1toN, now with the right most set bit
    // differentiate the input array & do xor with setbit
    // take 1toN array & do xor with setbit again.
    int num = 1;
    int xor1 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        xor1 = xor1 ^ arr[i] ^ num;
        num++;
    }

    // get rightmost set bit, (x & -x)
    // x & ~(x-1)
    int setBitNo = xor1 & -xor1;

    int x = 0;
    int y = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] ^ setBitNo)
            x = x ^ arr[i];
        else
            y = y ^ arr[i];
    }

    for (int i = 1; i <= arr.size(); i++)
    {
        if (arr[i] ^ i)
            x = x ^ i;
        else
            y = y ^ i;
    }
    // cout << x << " " << y << endl;

    // Approach4: Mark & Sign
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        int val = arr[abs(arr[i]) - 1];
        if (val > 0)
            arr[abs(arr[i]) - 1] = -val;
        else
            ans.push_back(abs(arr[i]));
    }

    for (int i = 0; i < arr.size(); i++)
        if (arr[i] > 0)
            ans.push_back(i + 1);

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}