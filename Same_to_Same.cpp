// You will be given two singly linked list of integer values as input. You need to check if all the elements of both list are same which means both list are same. If they are same print "YES" otherwise print "NO".

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

void handleCheckIsSame(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    int flag = 0;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data != temp2->data || (temp1->next == NULL && temp2->next != NULL) || (temp1->next != NULL && temp2->next == NULL))
        {
            flag = 1;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if (flag == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int data;
    while (1)
    {
        cin >> data;
        if (data != -1)
        {
            handleInsertAtTail(head1, tail1, data);
        }
        else
        {
            break;
        }
    }

    while (1)
    {
        cin >> data;
        if (data != -1)
        {
            handleInsertAtTail(head2, tail2, data);
        }
        else
        {
            break;
        }
    }

    handleCheckIsSame(head1, head2);

    return 0;
}