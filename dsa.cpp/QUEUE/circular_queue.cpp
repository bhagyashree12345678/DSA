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
    if (q->f == (q->r+1)%q->size )
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

void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        cout << "queue is full" << endl;
    }
    else
    {
        q->r = (q->r +1)%q->size;
        q->arr[q->r] = val;
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
        q->f = (q->f +1)%q->size;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 10;
    q->f = 0;
    q->r = 0;
    q->arr = (int *)malloc(q->size * sizeof(int));

    enqueue(q, 56);
    enqueue(q, 62);
    enqueue(q, 68);
    enqueue(q, 98);
    enqueue(q, 100);
    enqueue(q, 976);
    enqueue(q, 9087);

    cout<<"dequeue element : "<<dequeue(q)<<endl;
    enqueue(q, 9089);
    enqueue(q, 11);
    enqueue(q, 76);
    cout<<"dequeue element : "<<dequeue(q)<<endl;
    cout<<"dequeue element : "<<dequeue(q)<<endl;
    

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
