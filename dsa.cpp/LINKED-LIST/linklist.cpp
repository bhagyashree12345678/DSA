#include <iostream>
#include <cstdlib>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << "element :" << ptr->data << endl;
        ptr = ptr->next;
    }
};

struct node *insertAtFirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
};

struct node *insertAtIndex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct node *insertAtEnd(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
};

struct node *insertAfterNode(struct node *head, struct node *prevNode, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    prevNode->next = ptr;
    ptr->next = prevNode->next;

    return head;
};

struct node *deleteAtFirst(struct node *head)
{
    
    struct node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
};

struct node *deleteAtEnd(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;

    
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
    return head;
    
    
};

struct node *deleteAtIndex(struct node *head, int index)
{
    
    struct node *p = head;
    struct node *q = head->next;
    
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    

    p->next = q->next;
    free(q);
    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *last;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    last = (struct node *)malloc(sizeof(struct node));

    head->data = 56;
    head->next = second;

    second->data = 67;
    second->next = third;

    third->data = 80;
    third->next = last;

    last->data = 90;
    last->next = NULL;

    cout << "linked list before insertion" << endl;
    linkedListTraversal(head);

    cout << "linked list after insertion" << endl;

    head = insertAtFirst(head, 99);
    linkedListTraversal(head);

    cout << "linked list after insertion" << endl;

    head = insertAtIndex(head, 11, 3);
    linkedListTraversal(head);

    cout << "linked list after insertion" << endl;

    head = insertAtEnd(head, 45);
    linkedListTraversal(head);


    // head = insertAfterNode(head, second, 88);
    // cout << "linked list after insertion" << endl;
    // linkedListTraversal(head);

    head = deleteAtFirst(head);
    cout<<"linked list after deletion of first node"<<endl;
    linkedListTraversal(head);

    head = deleteAtIndex(head , 3);
    cout<<"linked list after deletion of index node"<<endl;
    linkedListTraversal(head);

    head = deleteAtEnd(head);
    cout<<"linked list after deletion of last node"<<endl;
    linkedListTraversal(head);
}