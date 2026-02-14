#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1)
    {
        data = data1;
        next = NULL;
        back = NULL;
    }
};
Node *convertDLL(vector<int> &a)
{
    Node *head = new Node(a[0]);
    Node *prev = head;
    for (int i = 1; i < a.size(); i++)
    {
        Node *temp = new Node(a[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node *delete_head(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    else if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    else
    {
        Node *prev = head;
        head = head->next;
        head->back = nullptr;
        prev->next = nullptr;
        delete prev;
        return head;
    }
}

Node *delete_tail(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *prev = temp->back;
    prev->next = NULL;
    temp->next = NULL;
    return head;
}
Node *delete_position(Node *head, int pos)
{
    Node *temp = head;
    int ct = 0;
    while (temp != NULL)
    {
        ct++;
        if (ct == pos)
        {
            break;
        }
        temp = temp->next;
    }
    Node *prev = temp->back;
    Node *front = temp->next;
    if (prev == NULL && front == NULL)
    {
        delete temp;
        return NULL;
    }
    else if (prev == NULL)
    {
        front->back = NULL;
        delete temp;
        return front;
    }
    else if (front == NULL)
    {
        prev->next = NULL;
        delete temp;
        return head;
    }
    else
    {
        prev->next = front;
        front->back = prev;
        temp->next = NULL;
        temp->back = NULL;
        delete temp;
        return head;
    }
}
void deleteNode(Node *temp)
{
    Node *prev = temp->back;
    Node *front = temp->next;

    if (front == NULL)
    {
        prev->next = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }
    prev->next = front;
    front->back = prev;

    temp->next = temp->back = NULL;
    delete (temp);
}
Node *insertBefore_head(Node *head, int val)
{
    Node *newhead = new Node(val, head, nullptr);
    head->back = newhead;
    return newhead;
}
Node *insertBefore_tail(Node *head, int val)
{
    if (head->next == NULL)
    {
        Node *newNode = new Node(val, nullptr, head);
        head->next = newNode;
        return head;
    }
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *prev = tail->back;
    Node *newnode = new Node(val, tail, prev);
    prev->next = newnode;
    tail->back = newnode;
    return head;
}
Node *insertBefore_k_pos(Node *head, int val, int k)
{
    if (k == 1)
    {
        return insertBefore_head(head, val);
    }
    Node *temp = head;
    int ct = 0;
    while (temp != NULL)
    {
        ct++;
        if (ct == k)
        {
            break;
        }
        temp = temp->next;
    }
    Node *prev = temp->back;
    Node *newnode = new Node(val, temp, prev);
    prev->next = newnode;
    temp->back = newnode;
    return head;
}
void insertbeforeNode(Node *temp, int val)
{
    Node *prev = temp->back;
    Node *newnode = new Node(val, temp, prev);
    if (prev != NULL)
    {
        prev->next = newnode;
    }
    temp->back = newnode;
}
int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6};
    Node *head = convertDLL(a);
    // print(head);
    // cout << endl;
    // head = delete_head(head);
    // print(head);

    // cout << endl;
    // head = delete_tail(head);
    // print(head);

    // cout << endl;
    // head = delete_position(head, 6);
    // print(head);

    // cout << endl;
    // deleteNode(head->next->next);
    // print(head);

    // insertion

    // head = insertBefore_head(head, 0);
    // print(head);

    // head = insertBefore_tail(head, 7);
    // print(head);

    // head = insertBefore_k_pos(head, 8, 1);
    // print(head);

    insertbeforeNode(head->next, 9);
    print(head);
}