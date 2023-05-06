#include <bits/stdc++.h>
using namespace std;

class Stack
{
    int *arr;
    int top;

public:
    Stack(int size)
    {
        top = -1;
        arr = new int[size];
    }

    void push(int x)
    {
        top++;
        arr[top] = x;
    }

    int pop()
    {
        int x = arr[top];
        top--;
        return x;
    }

    int topElement()
    {
        return arr[top];
    }

    int size()
    {
        return top + 1;
    }
};

int main()
{
    Stack s(100);
    for (int i = 10; i < 20; i++)
        s.push(i);
    cout << "Size: " << s.size() << endl;

    cout << "Pop: " << s.pop() << endl;
    cout << "Pop: " << s.pop() << endl;
    cout << "Top: " << s.topElement() << endl;

    return 0;
}