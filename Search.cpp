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

int handleSearchData(Node *head, int searchData)
{
    int searchIndex = 0;
    Node *temp = NULL;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->data == searchData)
        {
            temp = i;
            break;
        }
        searchIndex++;
    }
    if (temp == NULL)
    {
        return -1;
    }
    else
    {
        return searchIndex;
    }
}

int main()
{
    int testcaseCount;
    cin >> testcaseCount;
    while (testcaseCount--)
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
        int searchData;
        cin >> searchData;
        int searchIndex = handleSearchData(head, searchData);
        cout << searchIndex << endl;
    }

    return 0;
}