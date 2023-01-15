#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{

    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int result = factorial(i);
        if (result > n)
            break;
        cout << result << " ";
    }
    cout << endl;

    return 0;
}