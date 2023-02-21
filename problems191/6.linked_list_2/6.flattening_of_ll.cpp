#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int data;
    ListNode *next;
    ListNode *bottom;

    ListNode(int x)
    {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};

// Approach1: Using Recursion; TC:O(All Nodes), SC(N) if space is considered
ListNode *Merge(ListNode *a, ListNode *b)
{

    ListNode *temp = new ListNode(0);
    ListNode *res = temp;

    while (a && b)
    {
        if (a->data < b->data)
        {
            temp->bottom = a;
            temp = temp->bottom;
            a = a->bottom;
        }
        else
        {
            temp->bottom = b;
            temp = temp->bottom;
            b = b->bottom;
        }
    }

    if (a)
        temp->bottom = a;
    else
        temp->bottom = b;

    return res->bottom;
}

ListNode *flatten(ListNode *root)
{
    // Base Condition
    if (!root || !root->next)
        return root;

    // Start recursion to the last set
    root->next = flatten(root->next);

    // Once it reaches here, start merging
    root = Merge(root, root->next);

    return root;
}

// Approach1: Iterative; TC:O(All Nodes), SC(N) if space is considered

ListNode *flatten2(ListNode *root)
{
    while (root && root->next)
    {
        root = Merge(root, root->next);
        root->next = root->next->next;
    }
    return root;
}