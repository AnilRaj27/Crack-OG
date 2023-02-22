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

ListNode *rotateRight(ListNode *head, int k)
{
    // Approach1: until k, remove last node & attach front
    // TC: O(N*K), SC: O(1)
    // if (head == NULL || head->next == NULL)
    //     return head;
    // for (int i = 0; i < k; i++)
    // {
    //     node *temp = head;
    //     while (temp->next->next != NULL)
    //         temp = temp->next;
    //     node *end = temp->next;
    //     temp->next = NULL;
    //     end->next = head;
    //     head = end;
    // }

    // Approach2: cycle of k, calculate diff & attach lastnode to front ;
    // TC: O(N), SC: O(1)
    if (!head)
        return NULL;

    // calculating length
    int n = 1;
    ListNode *dummy = head;
    while (dummy->next)
    {
        n++;
        dummy = dummy->next;
    }

    // link last node to first node
    dummy->next = head;
    // when k is more than length of list
    k = k % n;
    // to get end of the list
    int diff = n - k;

    while (diff--)
        dummy = dummy->next;

    // breaking last node link and pointing to NULL
    head = dummy->next;
    dummy->next = NULL;

    return head;
}
