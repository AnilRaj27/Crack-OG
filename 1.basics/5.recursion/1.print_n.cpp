#include <bits/stdc++.h>
using namespace std;

void print_n(int i, int n)
{
    cout << i << " ";
    i = i + 1;
    if (i > n)
        return;
    return print_n(i, n);
}

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    print_n(1, 10);

    return 0;
}