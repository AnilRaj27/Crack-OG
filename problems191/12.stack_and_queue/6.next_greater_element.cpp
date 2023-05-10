#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {3, 10, 4, 2, 1, 2, 6, 1, 7, 2, 9};
    int n = arr.size();
    stack<int> s;

    int nge[n];

    for (int i = 2 * n - 1; i >= 0; i--)
    {
        while (!s.empty() && s.top() <= arr[i % n])
            s.pop();

        if (i < n)
        {
            if (!s.empty())
                nge[i] = s.top();
            else
                nge[i] = -1;
        }
        s.push(arr[i % n]);
    }

    for (auto i : nge)
        cout << i << " ";
    cout << endl;

    return 0;
}