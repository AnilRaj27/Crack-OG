#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &a, int pages, int students)
{
    int count = 0;
    int sumAllocated = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (sumAllocated + a[i] > pages)
        {
            count++;
            sumAllocated = a[i];
            if (sumAllocated > pages)
                return false;
        }
        else
        {
            sumAllocated += a[i];
        }
    }

    if (count < students)
        return true;
    return false;
}

int books(vector<int> &a, int b)
{
    if (b > a.size())
        return -1;

    int low = a[0];
    int high = 0;

    for (int i = 0; i < a.size(); i++)
    {
        high = high + a[i];
        low = min(low, a[i]);
    }

    while (low <= high)
    {
        int mid = (low + high) >> 2;
        if (isPossible(a, mid, b))
            high = mid - 1;
        else
            low = mid + 1;
    }

    return low;
}

int main()
{
    vector<int> a = {12, 34, 67, 90};
    int b = 2;

    cout << "Minimum Possible Number is " << books(a, b);

    return 0;
}