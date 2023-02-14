#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

ListNode *main(ListNode *head, int n)
{

    // Approach1: traverse 2times & maintain count, then delete count-n node

    // Approach2: maintain 2ptrs fast & slow, first traverse the fast pointer with n times
    // then start the slow ptr, if deletion is first then assign a new node & delete it.

    ListNode *fast = head, *slow = head;
    ListNode *ans;

    for (int i = 1; i <= n; i++)
        fast = fast->next;

    if (!fast)
    {
        ans = head->next;
        delete head;
        return ans;
    }

    while (fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }

    slow->next = slow->next->next;

    return head;
}