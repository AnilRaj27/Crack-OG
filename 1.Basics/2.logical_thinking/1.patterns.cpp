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
    


    return 0;
}