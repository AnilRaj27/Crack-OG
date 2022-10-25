#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int userInput()
    {
        // Read an array of numbers
        cout << "Enter the size of the array: " << endl;
        int length;
        cin >> length;

        cout << "Enter the inputs: " << endl;
        vector<int> arr = {};
        for (int index = 0; index < length; index++)
        {
            int num;
            cin >> num;

            arr.push_back(num);
        }

        // Output all the values in an array
        for (auto &val : arr)
        {
            cout << val << endl;
        }

        return 0;
    }
};

int main()
{
    Solution sol;
    sol.userInput();

    return 0;
}