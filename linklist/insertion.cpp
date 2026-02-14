// jay mahakaal
// shree mahakali maa
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data1, Node *next1 = NULL)
    {
        data = data1;
        next = next1;
    }
};

void printll(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *insert_at_head(Node *head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    return temp;
}
Node *insert_at_tail(Node *head, int val)
{
    if (head == NULL)
    {
        return new Node(val);
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *newnode = new Node(val);
    temp->next = newnode;
    return head;
}
Node *insert_position(Node *head, int pos, int val)
{
    if (head == NULL)
    {
        if (pos == 1)
        {
            return new Node(val);
        }
        else
        {
            return head;
        }
    }
    if (pos == 1)
    {
        return new Node(val, head);
    }
    int ct = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        ct++;
        if (ct == pos - 1)
        {
            Node *newnode = new Node(val, temp->next);
            temp->next = newnode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    Node *head = new Node(a[0]);
    Node *mover = head;
    for (int i = 1; i < a.size(); i++)
    {
        Node *temp = new Node(a[i]);
        mover->next = temp;
        mover = temp;
    }

    printll(head);
    // head = insert_at_head(head, 0);
    head = new Node(100, head);

    head = insert_at_tail(head, 6);
    printll(head);

    head = insert_position(head, 10, 50);
    printll(head);
}
