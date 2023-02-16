#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

ListNode *main(ListNode *headA, ListNode *headB)
{
    // Approach1: 2 for loops
    // while(headA) {
    //     ListNode* temp = headB;
    //     while(temp) {
    //         if(temp == headA)
    //             return headA;
    //         temp = temp->next;
    //     }
    //     headA = headA->next;
    // }
    // return NULL;

    // Approach2: Hashing, store address
    // unordered_set<ListNode*> set;
    // while(headA) {
    //     set.insert(headA);
    //     headA = headA->next;
    // }

    // while(headB) {
    //     if(set.find(headB) != set.end())
    //         return headB;
    //     headB = headB->next;
    // }
    // return NULL;

    // Approach3: difference in lengths
    // int lenA = 0,lenB = 0;
    // ListNode *temp1 = headA, *temp2 = headB;
    // while(temp1 || temp2) {
    //     if(temp1) {
    //         ++lenA; temp1 = temp1->next;
    //     }
    //     if(temp2) {
    //         ++lenB; temp2 = temp2->next;
    //     }

    // }

    // int diff = lenA-lenB;
    // if(diff < 0)
    //     while(diff++ != 0) headB = headB->next;
    // else
    //     while(diff-- != 0) headA = headA->next;

    // while(headA) {
    //     if(headA == headB)
    //         return headA;
    //     headB = headB->next;
    //     headA = headA->next;
    // }
    // return headA;

    // Approach4:
    ListNode *temp1 = headA, *temp2 = headB;
    while (temp1 != temp2)
    {
        if (!temp1)
            temp1 = headB;
        else
            temp1 = temp1->next;
        if (!temp2)
            temp2 = headA;
        else
            temp2 = temp2->next;
    }

    return temp1;
}