#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cout << "Enter the input: " << endl;
    cin >> num;

    switch (num % 2)
    {
    case 0:
        cout << "Number is Even!" << endl;
        break;
    case 1:
        cout << "Number is Odd!" << endl;
        break;
    }
    return 0;
}