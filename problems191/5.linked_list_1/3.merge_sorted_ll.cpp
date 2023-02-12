#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

ListNode *main(ListNode *list1, ListNode *list2)
{

    // Approach1: dummy node
    

    // Approach2: swap
    if (!list1)
        return list2;
    if (!list2)
        return list1;

    if (list1->val > list2->val)
        swap(list1, list2);

    ListNode *res = list1;

    while (list1 && list2)
    {
        ListNode *temp = NULL;

        while (list1 && list1->val <= list2->val)
        {
            temp = list1;
            list1 = list1->next;
        }

        temp->next = list2;
        swap(list1, list2);
    }
    return res;
}