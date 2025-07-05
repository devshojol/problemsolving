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
void handlePrindNode(Node *head)
{

    for (Node *i = head; i != NULL; i = i->next)
    {
        cout << i->data << " ";
    }
}

void handleDeleteDuplicate(Node *head)

{
    Node *current = head;
    while (current != NULL)
    {
        Node *prev = current;
        Node *compare = current->next;
        while (compare != NULL)
        {
            if (compare->data == current->data)
            {
                prev->next = compare->next;
                delete compare;
                compare = prev->next;
            }
            else
            {
                prev = compare;
                compare = compare->next;
            }
        }
        current = current->next;
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

    handleDeleteDuplicate(head);

    handlePrindNode(head);
    return 0;
}