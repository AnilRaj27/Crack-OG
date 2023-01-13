#include <bits/stdc++.h>
using namespace std;

bool prime_sqroot(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

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

    // cout << "The number is prime: " << boolalpha << isPrime << endl;
    cout << "The number is prime: " << boolalpha << prime_sqroot(n) << endl;

    return 0;
}