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
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == j)
                cout << i;
            else
                cout << " ";
        }
        for (int k = 1; k <= 2 * n - 2 * i; k++)
        {
            cout << " ";
        }
        cout << i << endl;
    }
    cout << "\n----------" << endl;

    // 1        1
    // 12      21
    // 123    321
    // 1234  4321
    // 1234554321
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int k = 1; k <= 2 * n - 2 * i; k++)
        {
            cout << " ";
        }
        for (int l = i; l >= 1; l--)
        {
            cout << l;
        }
        cout << endl;
    }
    cout << "\n----------" << endl;

    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    cout << "\n----------" << endl;

    // A
    // AB
    // ABC
    // ABCD
    // ABCDE
    int charStartValue = 65;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char(charStartValue + j);
        }
        cout << endl;
    }
    cout << "\n----------" << endl;

    // ABCDE
    // ABCD
    // ABC
    // AB
    // A
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << char(charStartValue + j);
        }
        cout << endl;
    }
    cout << "\n----------" << endl;

    // A
    // BB
    // CCC
    // DDDD
    // EEEEE
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(charStartValue - 1 + i);
        }
        cout << endl;
    }
    cout << "\n----------" << endl;

    // 	   A
    //    ABA
    //   ABCBA
    //  ABCDCBA
    // ABCDEDCBA
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            cout << char(charStartValue + k);
        }
        for (int l = i; l > 0; l--)
        {
            cout << char(charStartValue + l - 1);
        }
        cout << endl;
    }
    cout << "\n----------" << endl;

    // E
    // DE
    // CDE
    // BCDE
    // ABCDE
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(charStartValue + n - i + j - 1);
        }
        cout << endl;
    }
    cout << "\n----------" << endl;

    // **********
    // ****  ****
    // ***    ***
    // **      **
    // *        *
    // *        *
    // **      **
    // ***    ***
    // ****  ****
    // **********
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < 2 * i; k++)
        {
            cout << " ";
        }
        for (int l = 0; l < n - i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= 2 * n - 2 * i; k++)
        {
            cout << " ";
        }
        for (int l = 1; l <= i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n----------" << endl;

    // *        *
    // **      **
    // ***    ***
    // ****  ****
    // **********
    // ****  ****
    // ***    ***
    // **      **
    // *        *

    cout << "\n----------" << endl;

    // *****
    // *   *
    // *   *
    // *   *
    // *****
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((j > 1 && j < n) && (i > 1 && i < n))
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
    cout << "\n----------" << endl;

    // [4 4 4 4 4 4 4]
    // [4 3 3 3 3 3 4]
    // [4 3 2 2 2 3 4]
    // [4 3 2 1 2 3 4]
    // [4 3 2 2 2 3 4]
    // [4 3 3 3 3 3 4]
    // [4 4 4 4 4 4 4]
    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= i; j--)
        {
            cout << j;
        }
        for (int k = 1; k < i; k++)
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}