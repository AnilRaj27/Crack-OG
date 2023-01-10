#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    int originalN = n;

    int rev = 0;
    int rem;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    if (originalN == rev)
    {
        cout << "Provided number is palindrome" << endl;
    }
    else
    {
        cout << "Provided number is not a palindrome" << endl;
    }

    return 0;
}