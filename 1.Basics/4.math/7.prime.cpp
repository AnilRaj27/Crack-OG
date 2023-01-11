#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    bool isPrime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    cout << "The number is prime: " << isPrime << endl;

    return 0;
}