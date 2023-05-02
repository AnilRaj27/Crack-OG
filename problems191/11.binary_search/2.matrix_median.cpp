#include <bits/stdc++.h>
using namespace std;

int countSmallerThanMid(vector<int> &row, int mid)
{
    int l = 0;
    int h = row.size() - 1;
    while (l <= h)
    {
        int m = (l + h) >> 1;
        if (row[m] <= mid)
            l = m + 1;
        else
            h = m - 1;
    }
    return l;
}

int main()
{

    // Approach1: put all the m*n elements in a vector & sort it & find the mid; TC: O(M*N log(M*N)), SC: O(M*N)

    // Approach2:
    vector<vector<int>> matrix = {{1, 3, 5}, {2, 6, 9}, {3, 6, 9}};
    int low = 1;
    int high = 1e9;
    int n = matrix.size();
    int m = matrix[0].size();

    while (low <= high)
    {
        int mid = (low + high) >> 1;

        int cnt = 0; // <=mid

        for (int i = 0; i < n; i++)
        {
            cnt += countSmallerThanMid(matrix[i], mid);
        }

        cout << low << ":" << high << "; mid: " << mid << " cnt: " << cnt << " n*m: " << (n * m) / 2 << endl;

        if (cnt <= (n * m) / 2)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << low << endl;

    return 0;
}