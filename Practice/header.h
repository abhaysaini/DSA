#ifndef header_h
#define header_h

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};

struct Queue
{
    int front;
    int size;
    int rear;
    struct Node **arr;
};

void display(struct Queue *q)
{
    for (int i = q->front + 1; i <= q->rear; i++)
    {
        cout << q->arr[i] << " ";
    }
}
void create(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = -1;
    q->arr = (struct Node **)malloc(q->size * sizeof(struct Node *));
}
void enqueue(struct Queue *q, struct Node *x)
{
    if (q->rear == q->size - 1)
    {
        cout << "Queue is Full" << endl;
    }

    else
    {
        q->rear++;
        q->arr[q->rear] = x;
    }
}

struct Node *dequeue(struct Queue *q)
{
    struct Node *x = NULL;
    if (q->front == q->rear)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        q->front++;
        x = q->arr[q->front];
    }

    return x;
}

int isEmpty(struct Queue q)
{
    return q.front == q.rear;
}
#endif