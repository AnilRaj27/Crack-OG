#include <bits/stdc++.h>
using namespace std;

bool isValid(string str)
{
    stack<char> s;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
            s.push(str[i]);
        else
        {
            if (str.size() == 0)
                return false;
            char ch = s.top();
            s.pop();
            if ((str[i] == ')' and ch == '(') or
                (str[i] == ']' and ch == '[') or
                (str[i] == '}' and ch == '{'))
                continue;
            else
                return false;
        }
    }
    return s.empty();   
}

int main()
{

    string s = "()[{}()]";
    if (isValid(s))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}