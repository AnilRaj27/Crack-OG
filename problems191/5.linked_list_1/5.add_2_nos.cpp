#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr){};
    ListNode(int x) : val(x), next(nullptr){};
    ListNode(int x, ListNode *next) : val(x), next(next){};
};

ListNode *main(ListNode *l1, ListNode *l2)
{

    int rem = 0;
    ListNode *head = NULL;
    ListNode *last = head;
    while (l1 || l2)
    {
        int val = rem;
        if (l1)
        {
            val = val + l1->val;
            l1 = l1->next;
        }

        if (l2)
        {
            val = val + l2->val;
            l2 = l2->next;
        }

        rem = val / 10;
        if (val > 9)
        {
            val = val % 10;
        }

        ListNode *newNode = new ListNode();
        newNode->val = val;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
            last = newNode;
        }
        else
        {
            last->next = newNode;
            last = newNode;
        }
    }

    if (rem)
    {
        ListNode *newNode = new ListNode();
        newNode->next = NULL;
        newNode->val = rem;
        last->next = newNode;
        last = newNode;
    }

    return head;

    // simpler way
    ListNode *dummy = new ListNode();
    ListNode *temp = dummy;
    int carry = 0;
    while ((l1 != NULL || l2 != NULL) || carry)
    {
        int sum = 0;
        if (l1 != NULL)
        {
            sum += l1->val;
            l1 = l1->next;
        }

        if (l2 != NULL)
        {
            sum += l2->val;
            l2 = l2->next;
        }

        sum += carry;
        carry = sum / 10;
        ListNode *node = new ListNode(sum % 10);
        temp->next = node;
        temp = temp->next;
    }
    return dummy->next;
}