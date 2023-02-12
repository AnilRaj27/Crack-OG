#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

ListNode *main(ListNode *node)
{

    // Approach1: copy val to the curr node & del the next node
    node->val = node->next->val;
    node->next = node->next->next;
}