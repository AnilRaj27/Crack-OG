#include <bits/stdc++.h>
using namespace std;

int sum_of_n(int n)
{

    if (n == 0)
        return 0;
    return n + sum_of_n(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    int result = sum_of_n(n);
    cout << "Sum: " << result << endl;

    return 0;
}