#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

ListNode *detectCycle(ListNode *head)
{

    // Approach1: hashset, TC: O(N), SC: O(N)
    // set<ListNode*> s;
    // while(head) {
    //     if(s.find(head) != s.end())
    //         break;
    //     s.insert(head);
    //     head = head->next;
    // }

    // return head;

    // Approach2: slow & fast, TC: O(N), SC: O(1)
    if (!head || !head->next)
        return NULL;

    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *dummy = head;

    while (fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            while (slow != dummy)
            {
                dummy = dummy->next;
                slow = slow->next;
            }
            return dummy;
        }
    }

    return NULL;
}