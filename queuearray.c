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

void create_Q(Queue *q)
{
    q->head =  q->tail = 0;
    q->size = 50;
}

void enQ(Queue *q,int x)
{
    if(q->tail < q->size)
        q->a[++q->tail] = x;
    if(q->head == 0)
        q->head = 1;
}

void enQ_front(Queue *q,int x)
{
    if(q->head == 1)
    {
        printf("Cannot enQ_front");
        return;
    }
    if(q->head == 0)
    {
        q->a[1]=x;
        q->head = q->tail =  1;
        return;
    }
    q->a[--q->head]=x;
}

void deQ(Queue *q)
{
    if(q->head < q->tail)
        printf("Dequeued %d\n",q->a[q->head++]);

    if(q->head == q->tail && q->head > 0)
    {
        printf("Dequeued %d\n",q->a[q->head]);
        q->head = q->tail =0;
    }
}

void listQ(Queue *q)
{
    int i;
    if(q->head == 0)
        printf("Queue is empty\n");
    else
    {   
        printf("The Queue is:\n");
        for(i=q->head; i <= q->tail; i++)
            printf("%d ", q->a[i]);
        printf("\n");
    }
}

bool isEmptyQ(Queue *q)
{
    if(q->head == 0)
        return true;
    return false;
}
void main()
{
    Queue q;
    create_Q(&q);
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
