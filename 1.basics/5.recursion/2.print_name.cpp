#include <bits/stdc++.h>
using namespace std;

void print_var(int n, string name)
{
    if (n == 0)
        return;
    cout << name << endl;
    return print_var(n - 1, name);
}

int main()
{
    print_var(5, "ANIL");
    return 0;
}