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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int data;
    while (1)
    {
        cin >> data;
        if (data != -1)
        {
            handleInsertAtTail(head, tail, data);
        }
        else
        {
            break;
        }
    }

    int min = head->data, max = head->data;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->data > max)
        {
            max = i->data;
        }
        else if (i->data < min)
        {
            min = i->data;
        }
    }
    if (head == NULL)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << max - min << endl;
    }
    return 0;
}
