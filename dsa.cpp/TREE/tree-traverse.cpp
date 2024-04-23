#include <iostream>
#include <cstdlib>

using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int val)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node)); // creating node pointer & allocating memeory in heap
    n->data = val;                                  // setting the value
    n->left = NULL;                                 // setting the left child
    n->right = NULL;                                // setting the right child
    return n;
}

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
    else
        return;
}

void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
    else
        return;
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
    else
        return;
}

int isBST(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}

struct node *search(struct node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    else if (root->data > key)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}

void insert(struct node *root, int key)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (key == root->data)
        {
            return;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    struct node* new = createNode(key);
    if (key < prev->data)
    {
        prev->left = new;
    }
    else
    {
        prev->right = new;
    }
}

int main()
{

    // Constructing the root - using function
    struct node *p = createNode(4);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(5);
    struct node *p3 = createNode(2);
    struct node *p4 = createNode(3);

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    preOrder(p);
    cout << endl;
    postOrder(p);
    cout << endl;
    inOrder(p);
    cout << endl;
    isBST(p);

    struct node *n = search(p, 4);
    if (n != NULL)
    {
        cout << "found:" << n->data << endl;
        ;
    }
    else
    {
        cout << "not found." << endl;
    }

    insert(p, 7);
    cout << p->right->right;
    return 0;
}