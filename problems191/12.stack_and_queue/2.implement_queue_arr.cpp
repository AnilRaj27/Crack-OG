#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int *arr;
    int front, back, currSize, maxSize;

public:
    Queue(int size)
    {
        maxSize = size;
        arr = new int[maxSize];
        front = -1, back = -1, currSize = 0;
    };

    void push(int element)
    {
        if (back == maxSize)
        {
            cout << "Queue is full\nExiting..." << endl;
            exit(1);
        }

        if (back == -1)
        {
            front = 0, back = 0;
        }
        else
        {
            back = (back + 1) % maxSize;
        }

        arr[back] = element;
        currSize++;
    }

    int pop()
    {
        if (front == -1)
        {
            cout << "Queue is empty\nExiting..." << endl;
            exit(1);
        }
        int popped = arr[front];
        if (currSize == 1)
        {
            front = -1;
            back = -1;
        }
        else
        {
            front = (front + 1) % maxSize;
        }
        currSize--;
        return popped;
    }

    int top()
    {
        if (front == -1)
        {
            cout << "Queue is empty\nExiting..." << endl;
            exit(1);
        }

        return arr[front];
    }

    int size() { return arr[currSize]; }
};

int main()
{

    Queue q(6);
    q.push(4);
    q.push(14);
    q.push(24);
    q.push(34);
    cout << "The peek of the queue before deleting any element " << q.top() << endl;
    cout << "The size of the queue before deletion " << q.size() << endl;
    cout << "The first element to be deleted " << q.pop() << endl;
    cout << "The peek of the queue after deleting an element " << q.top() << endl;
    cout << "The size of the queue after deleting an element " << q.size() << endl;

    return 0;
}