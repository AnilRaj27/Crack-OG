#include <bits/stdc++.h>
using namespace std;

bool palindrome(string name)
{

}

int main()
{
    string name = "ABCDCBA";
    string result = palindrome(name);
    if (name == result)
        cout << "name is palindrome!";
    cout << "name is not palindrome!";
    return 0;
}