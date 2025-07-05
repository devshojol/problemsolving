// You have a singly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

// If X is 0 that means you will insert the value V to the head of the linked list.
// If X is 1 then you will insert the value V to the tail of the linked list.
// If X is 2 then you will delete the value Vth index of the linked list. Assume that index starts from 0. If the index is invalid, then you shouldn't perform the deletion.
// After each query you need to print the linked list.

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void handleInsertAtTail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}
void handleInsertAtHead(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}
void handleDelete(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

void handleDeleteHead(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}
void handleDeleteTail(Node *&head, Node *&tail)
{
    Node *temp = head;
    while (temp->next != tail)
    {
        temp = temp->next;
    }
    Node *deleteNode = tail;
    temp->next = NULL;
    tail = temp;
    delete deleteNode;
}
void handlePrindNode(Node *head)
{

    for (Node *i = head; i != NULL; i = i->next)
    {
        cout << i->data << " ";
    }
}

int handleFindListSize(Node *head)
{
    int count = 0;
    for (Node *i = head; i != NULL; i = i->next)
    {
        count++;
    }
    return count;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            handleInsertAtHead(head, tail, v);
        }
        if (x == 1)
        {
            handleInsertAtTail(head, tail, v);
        }
        if (x == 2)
        {
            int listSize = handleFindListSize(head);
            if (head != NULL && v < listSize)
            {
                if (v == 0)
                {
                    handleDeleteHead(head);
                }
                else if (v == listSize - 1)
                {
                    handleDeleteTail(head, tail);
                }
                else
                {
                    handleDelete(head, v);
                }
            }
        }
        handlePrindNode(head);
        cout << endl;
    }
    return 0;
}