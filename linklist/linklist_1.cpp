#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1)
    {
        data = data1;
        next = NULL;
    }
};
Node *converarray2ll(vector<int> &a)
{
    Node *head = new Node(a[0]);
    Node *mover = head;
    for (int i = 1; i < a.size(); i++)
    {
        Node *temp = new Node(a[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
int legth(Node *head)
{
    int ct = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        ct++;
        temp = temp->next;
    }
    return ct;
}
int check_element(Node *head, int val)
{
    Node *temp = head;
    while (temp)
    {
        if (temp->data == val)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    Node *head = converarray2ll(a);
    // cout << head->data << " ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << legth(head) << endl;
    cout << check_element(head, 15) << endl;
    return 0;
}
