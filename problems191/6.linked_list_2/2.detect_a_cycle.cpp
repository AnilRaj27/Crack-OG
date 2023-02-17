#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

bool main(ListNode *head)
{
    // set<ListNode*> s;

    // while(head) {
    //     if(s.find(head) != s.end())
    //         return true;
    //     s.insert(head);
    //     head = head->next;
    // }

    // return false;

    ListNode *slow = head, *fast = head;
    if (!head)
        return false;

    while (fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;
    }

    return false;
}