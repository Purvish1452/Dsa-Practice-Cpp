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
Node *printll(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
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
Node *removehead(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}
Node *remove_tail(Node *head)
{
    Node *temp = head;
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;

    temp->next = NULL;
    return head;
}
Node *delete_k_th(Node *head, int k)
{
    if (head == NULL || k <= 0)
    {
        return head;
    }
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int ct = 0;
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
        ct++;
        if (ct == k)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    // cout << head->data << " ";
    Node *head = converarray2ll(a);
    printll(head);
     head = removehead(head);
    printll(head);

    cout << "After removing head: ";
     head = remove_tail(head);
    printll(head);


    head = delete_k_th(head, 1);
    printll(head);
}
