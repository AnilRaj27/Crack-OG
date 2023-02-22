
#include <bits/stdc++.h>
using namespace std;

// Definition for a Node.
struct Node
{
    int val;
    Node *next;
    Node *random;

    Node(int _val)
    {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

Node *copyRandomList(Node *head)
{

    // Approach1: maintain a unordered_map & replicate; TC: O(N), SC: O(N)
    // unordered_map<Node*, Node*> m;

    // Node *ptr = head;
    // while(ptr) {
    //     m[ptr] = new Node(ptr->val);
    //     ptr = ptr->next;
    // }

    // ptr = head;
    // while(ptr) {
    //     m[ptr]->next = m[ptr->next];
    //     m[ptr]->random = m[ptr->random];
    //     ptr = ptr->next;
    // }

    // return m[head];

    // Approach2:
    Node *ptr = head;
    Node *front = head;

    // First round: make copy of each node,
    // and link them together side-by-side in a single list.
    while (ptr)
    {
        front = ptr->next;
        Node *temp = new Node(ptr->val);
        ptr->next = temp;
        temp->next = front;
        ptr = front;
    }

    // Second round: assign random pointers for the copy nodes.
    ptr = head;
    while (ptr)
    {
        if (ptr->random)
            ptr->next->random = ptr->random->next;
        ptr = ptr->next->next;
    }

    // Third round: restore the original list, and extract the copy list.
    ptr = head;
    Node *pseudoHead = new Node(0);
    Node *copy = pseudoHead;
    while (ptr)
    {
        front = ptr->next->next;

        // extract the copy
        copy->next = ptr->next;

        // restore the original list
        ptr->next = front;

        copy = copy->next;
        ptr = front;
    }

    return pseudoHead->next;
}
