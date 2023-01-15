#include <bits/stdc++.h>
using namespace std;

int gcd(int num1, int num2)
{
    int maxNum;
    for (int i = 1; i <= min(num1, num2); i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            maxNum = max(maxNum, i);
        }
    }
    return maxNum;
}

int gcd_recursive(int num1, int num2)
{
    // formula: gcd(a, b) = gcd(b, a%b)
    if (num2 == 0)
    {
        return num1;
    }
    return gcd_recursive(num2, num1 % num2);
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    int result = gcd(num1, num2);
    int recursiveResult = gcd_recursive(num1, num2);
    cout << "GCD of the two numbers is " << result << endl;

    return 0;
}