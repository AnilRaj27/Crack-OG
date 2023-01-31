#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    int target = 9;

    sort(arr.begin(), arr.end());
    set<vector<int>> ans;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = i + 1; j < arr.size(); j++)
    //     {
    //         for (int k = j + 1; k < arr.size(); k++)
    //         {
    //             int diff = target - (arr[i] + arr[j] + arr[k]);
    //             if (binary_search(arr.begin() + k + 1, arr.end(), diff))
    //             {
    //                 vector<int> temp;
    //                 temp = {arr[i], arr[j], arr[k], diff};
    //                 sort(temp.begin(), temp.end());
    //                 ans.insert(temp);
    //             }
    //         }
    //     }
    // }
    // for (auto &x : ans)
    // {
    //     for (auto &y : x)
    //     {
    //         cout << y << " ";
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            int l = j + 1;
            int h = arr.size() - 1;
            while (l < h)
            {
                int sum = arr[i] + arr[j] + arr[l] + arr[h];
                if (target == sum)
                {
                    ans.insert({arr[i], arr[j], arr[l], arr[h]});
                    l++;
                    h--;
                }
                else if (sum < target)
                    l++;
                else
                    h--;
            }
        }
    }

    // for (auto quadruplets : s)
    //     output.push_back(quadruplets);

    // for (auto &x : ans)
    // {
    //     for (auto &y : x)
    //     {
    //         cout << y << " ";
    //     }
    //     cout << endl;
    // }

    vector<vector<int>> output;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            int l = j + 1;
            int h = arr.size() - 1;
            while (l < h)
            {
                int sum = arr[i] + arr[j] + arr[l] + arr[h];
                if (target == sum)
                {
                    vector<int> q(4, 0);
                    q[0] = arr[i];
                    q[1] = arr[j];
                    q[2] = arr[l];
                    q[3] = arr[h];
                    output.push_back(q);
                    l++;
                    h--;
                    while (l < h && arr[l] == arr[2])
                        l++;
                    while (l < h && arr[h] == arr[3])
                        h--;
                }
                else if (sum < target)
                    l++;
                else
                    h--;
            }
            while (j + 1 < arr.size() - 1 && arr[j + 1] == arr[j])
                j++;
        }
        while (i + 1 < arr.size() - 1 && arr[i + 1] == arr[i])
            i++;
    }

    for (auto &x : output)
    {
        for (auto &y : x)
            cout << y << " ";
        cout << endl;
    }

    return 0;
}