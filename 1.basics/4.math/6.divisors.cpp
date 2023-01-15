#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    vector<int> arr = {};
    for (int index = 0; index * index <= n; index++)
    {
        if (n % index == 0)
        {
            arr.push_back(index);
            if (n / index != index)
                arr.push_back(n / index);
        }
    }

    for (auto &x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}