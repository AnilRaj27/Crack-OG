#include <bits/stdc++.h>
using namespace std;

class LRUCache
{
public:
    class node
    {
    public:
        int key, value;
        node *prev, *next;
        node(int _key, int _val)
        {
            key = _key;
            value = _val;
        }
    };

    node *head = new node(-1, -1);
    node *tail = new node(-1, -1);

    int cap;
    unordered_map<int, node *> map;
    LRUCache(int size)
    {
        cap = size;
        head->next = tail;
        tail->next = head;
    }

    void addNode(node *newNode)
    {
        node *temp = head->next;

        newNode->next = temp;
        newNode->prev = head;
        head->next = newNode;
        temp->prev = newNode;
    }

    void deleteNode(node *delNode)
    {
        node *delPrev = delNode->prev;
        node *delNext = delNode->next;
        delPrev->next = delNext;
        delNext->prev = delPrev;
    }

    int get(int key_)
    {
        if (map.find(key_) != map.end())
        {
            node *resNode = map[key_];
            int res = resNode->value;
            map.erase(key_);
            deleteNode(resNode);
            addNode(resNode);
            map[key_] = head->next;

            return res;
        }
        return -1;
    }

    void put(int key_, int value_)
    {
        if (map.find(key_) != map.end())
        {
            node *existingNode = map[key_];
            map.erase(key_);
            deleteNode(existingNode);
        }
        if (map.size() == cap)
        {
            map.erase(tail->prev->key);
            deleteNode(tail->prev);
        }

        addNode(new node(key_, value_));
        map[key_] = head->next;
    }
};

int main()
{

    return 0;
}
