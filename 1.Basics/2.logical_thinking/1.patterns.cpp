#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Input
    int i, j, k, n;
    cout << "Enter a number: " << endl;
    cin >> n;
    cout << "\n----------" << endl;

    // Patterns

    // *****
    // *****
    // *****
    // *****
    // *****
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n----------" << endl;

    // *
    // **
    // ***
    // ****
    // *****
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n----------" << endl;

    // 1
    // 12
    // 123
    // 1234
    // 12345
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
    cout << "\n----------" << endl;

    // 1
    // 22
    // 333
    // 4444
    // 55555
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
    cout << "\n----------" << endl;

    // *****
    // ****
    // ***
    // **
    // *
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n----------" << endl;

    // 12345
    // 1234
    // 123
    // 12
    // 1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
    cout << "\n----------" << endl;

    //     *
    //    ***
    //   *****
    //  *******
    // *********
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n----------" << endl;

    // *********
    //  *******
    //   *****
    //    ***
    //     *
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // for (int k = (2 * n) - i - 1; k > i; k--)
        // {
        //     cout << "*";
        // }
        for (int k = i; k < 2 * n - i - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n----------" << endl;

    //     *
    //    ***
    //   *****
    //  *******
    // *********
    // *********
    //  *******
    //   *****
    //    ***
    //     *
    for (int i = 0; i < 2 * n; i++)
    {
        if (i < n)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << " ";
            }
            for (int k = 0; k < 2 * i + 1; k++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < i - n; j++)
            {
                cout << " ";
            }
            // for (int k = 3 * n - i - 1; k > i - n; k--)
            // {
            //     cout << "*";
            // }
            for (int k = i - n; k < 3 * n - i - 1; k++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    cout << "\n----------" << endl;

    // *
    // **
    // ***
    // ****
    // *****
    // ****
    // ***
    // **
    // *
    for (int i = 0; i < 2 * n; i++)
    {
        if (i < n)
        {
            for (int j = 0; j < i + 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (int j = i; j < 2 * n; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    cout << "\n----------" << endl;

    // 1
    // 10
    // 101
    // 1010
    // 10101
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            // j % 2 ? cout << "0" : cout << "1";
            if (j % 2 == 0)
                cout << "1";
            else
                cout << "0";
            // cout << j % 2;
        }
        cout << endl;
    }
    cout << "\n----------" << endl;

    // 1        1
    //  2      2
    //   3    3
    //    4  4
    //     55
    

    return 0;
}