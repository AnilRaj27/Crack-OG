#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter Number: ";
    int n;
    cin >> n;

    vector<vector<int>> pascalArr = {{1}};

    for (int i = 0; i < n; i++)
    {
        vector<int> temp = {1};
        for (int j = 0; j < pascalArr[i].size() - 1; j++)
        {
            temp.push_back(pascalArr[i][j] + pascalArr[i][j + 1]);
        }
        temp.push_back(1);
        pascalArr.push_back(temp);
    }

    for (int i = 0; i < pascalArr.size(); i++)
    {
        for (int j = 0; j < pascalArr[i].size(); j++)
        {
            cout << pascalArr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}