#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

ListNode *main(ListNode *head)
{
    if (head == NULL)
        return NULL;

    ListNode *it = head->next;
    head->next = NULL;
    while (it)
    {
        ListNode *temp = it;
        it = it->next;
        temp->next = head;
        head = temp;
    }

    return head;
}