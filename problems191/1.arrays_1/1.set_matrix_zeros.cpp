#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Approach1(worst approach): Traverse the matrix if we find 0 make the row/col to -1
    // TC: O(2*m*n) * O(m+n), SC: O(1)

    // Approach2: Take 2 dummy array 1 for row & 1 for col, initialize with any value except 0,
    // traverse matrix & see if any field is 0, then put the 0 in dummy arrays
    // TC: O(2*m*n), SC: O(m+n)

    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int row = matrix.size();
    int col = matrix[0].size();
    vector<int> dummyRowArray(row, -1);
    vector<int> dummyColArray(col, -1);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == 0)
            {
                dummyRowArray[i] = 0;
                dummyColArray[j] = 0;
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (dummyRowArray[i] == 0 || dummyColArray[j] == 0)
                matrix[i][j] = 0;
        }
    }

    // Approach3: assume the first row & column as dummy array reference & check the inner arr
    // at last check if first row & col has zero & make them zeros.
    bool isCol = false;
    for (int i = 0; i < matrix.size(); i++)
    {
        if (matrix[i][0] == 0)
            isCol = true;
        for (int j = 1; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[0][j] = 0;
                matrix[i][0] = 0;
            }
        }
    }

    for (int i = 1; i < matrix.size(); i++)
    {
        for (int j = 1; j < matrix[i].size(); j++)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
        }
    }

    if (matrix[0][0] == 0)
    {
        for (int j = 0; j < matrix[0].size(); j++)
            matrix[0][j] = 0;
    }

    if (isCol)
    {
        for (int i = 0; i < matrix.size(); i++)
            matrix[i][0] = 0;
    }

    return 0;
}