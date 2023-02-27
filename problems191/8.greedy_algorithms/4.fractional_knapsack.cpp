#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 3;
    int W = 50;
    vector<int> values = {100, 60, 120};
    vector<int> weight = {20, 10, 30};

    pair<int, int> p[n + 1];
    for (int i = 0; i < n; i++)
    {
        p[i].first = values[i];
        p[i].second = weight[i];
    }
    sort(p, p + n);

    int currWeight = 0;
    double finalValue = 0.0;
    for (int i = 0; i < n; i++)
    {
        if (currWeight + p[i].second <= W)
        {
            currWeight += p[i].second;
            finalValue += p[i].first;
        }
        else
        {
            int remain = W - currWeight;
            finalValue += (p[i].first / (double)p[i].second) * (double)remain;
            break;
        }
    }

    cout << finalValue << endl;

    return 0;
}