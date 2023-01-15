#include <bits/stdc++.h>
using namespace std;

void print_n(int n)
{
    if (n < 1)
        return;
    cout << n << endl;
    return print_n(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    print_n(n);

    return 0;
}