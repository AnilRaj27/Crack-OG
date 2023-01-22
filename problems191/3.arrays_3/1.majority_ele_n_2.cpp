#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {3, 2, 3, 2};

    // moore's voting algorithm
    int count = 0;
    int candidate = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (count == 0)
            candidate = arr[i];
        if (candidate == arr[i])
            count++;
        else
            count--;
    }

    cout << candidate << endl;
    return 0;
}