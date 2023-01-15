#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    int originalN = n;

    int armNum = 0;
    int rem;
    while (n != 0)
    {
        armNum += pow(n % 10, 3);
        n = n / 10;
    }

    if (originalN == armNum)
    {
        cout << "Provided number is armstrong" << endl;
    }
    else
    {
        cout << "Provided number is not a armstrong" << endl;
    }

    return 0;
}