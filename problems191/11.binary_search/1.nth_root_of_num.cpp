#include <bits/stdc++.h>
using namespace std;

double multiply(double num, int n)
{
    double ans = 1.0;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * num;
    }
    return ans;
}

// TC: N*log(M*10^d)
// SC: O(1)

int main()
{
    int n = 3, m = 27;

    double low = 1, high = 27, eps = 1e-7;
    while ((high - low) > eps)
    {
        double mid = (low + high) / 2.0;
        if (multiply(mid, n) < m)
            low = mid;
        else
            high = mid;
    }

    cout << low << " " << high << endl;
    cout << pow(m, (double)(1.0 / (double)n)) << endl;

    return 0;
}