#include <iostream>
#include <cstdlib>

using namespace std;

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct queue *q)
{
    if (q->f == q->size - 1)
    {
        return 1;
    }
    else
        return 0;
};

int isEmpty(struct queue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
};

void enqueue(struct queue *q, int value)
{
    if (isFull(q))
    {
        cout << "queue is full" << endl;
    }
    else
    {
        q->r++;
        q->arr[q->r] = value;
        cout << val << endl;
    }
};

int dequeue(struct queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 100;
    q->f = 0;
    q->r = 0;
    q->arr = (int *)malloc(q->size * sizeof(int));

    enqueue(q, 56);
    enqueue(q, 62);
    enqueue(q, 68);
    enqueue(q, 98);

    cout<<"dequeue element : "<<dequeue(q)<<endl;;
    enqueue(q, 99);

    if (isEmpty(q))
    {
        cout << "queue is empty" << endl;
    }
    if (isFull(q))
    {
        cout << "queue is full" << endl;
    }

    return 0;
}
