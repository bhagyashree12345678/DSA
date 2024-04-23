#include <iostream>
#include <cstdlib>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

// iterative method for reverse a linked list.
node *reverse_iterative(node *&head)
{
    node *prevptr = NULL;
    node *currentptr = head;
    node *nextptr;

    while (currentptr != NULL)
    {
        nextptr = currentptr->next;
        currentptr->next = prevptr;

        prevptr = currentptr;
        currentptr = nextptr;
    }
    return prevptr;
}

// reverse a linked list in recursive way...
node *reverseRecursive(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

bool isPalindrome(node *head)
{
    if (head == NULL && head->next == NULL)
        return true;

    node *slow = head;
    node *fast = head;

    while (fast->next == NULL && fast->next->next == NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }

    slow->next = reverseRecursive(slow);
    slow = slow->next;

    while (slow != NULL)
    {
        if (head->data != slow->data)
            return false;

        head = head->next;
        slow = slow->next;
    }

    return true;
}

node* middleElement(node *head)
{
    node* slow = head;
    node* fast = head;

    while (fast->next!=NULL&&fast->next->next!=NULL)
    {
        
        slow=head->next;
        fast=head->next->next;
    }
    return slow;
    
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    struct node *sixth;
    struct node *seven;
    struct node *eight;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));
    sixth = (struct node *)malloc(sizeof(struct node));
    seven = (struct node *)malloc(sizeof(struct node));
    eight = (struct node *)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->next = sixth;

    sixth->data = 6;
    sixth->next = seven;

    seven->data = 7;
    seven->next = eight;

    eight->data = 8;
    eight->next = NULL;
}