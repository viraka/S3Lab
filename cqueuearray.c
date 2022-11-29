#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Queue
{
    int head;
    int tail;
    int size;
    int a[51];
}Queue;

void create_Q(Queue *q, int x)
{
    q->head =  q->tail = 0;
    q->size = x;
}

bool isFull(Queue *q)
{
    if (q->tail % q->size == q->head - 1)
        return true;
    return false;
}

bool isEmptyQ(Queue *q)
{
    if(q->head == 0)
        return true;
    return false;
}

void enQ(Queue *q,int x)
{
    if (!isFull(q))
    {
        q->tail = (q->tail % q->size)+1;
        q->a[q->tail]=x;
    }

    if (q->head == 0)
        q->head = 1;
}

void deQ(Queue *q)
{
    if (q->head !=0)
    {
        printf("Dequeued %d\n",q->a[q->head]);
        if (q->head!=q->tail)
            q->head = (q->head % q->size) + 1;
        else
            q->head = q->tail = 0;
    }
}

void listQ(Queue *q)
{
    int x;
    for(x = q->head; true ; x++)
    {
        if(x==0)
            x++;
        printf("%d\n",q->a[x]);
        if (x==q->tail)
            break;
        x = x % q->size;
    }
}

void main()
{
    Queue q;
    create_Q(&q,5);
    enQ(&q,5);
    enQ(&q,4);
    enQ(&q,3);
    enQ(&q,2);
    enQ(&q,1);
    deQ(&q);
    deQ(&q);
    listQ(&q);
    printf("Queue is empty? %d", isEmptyQ(&q));
}