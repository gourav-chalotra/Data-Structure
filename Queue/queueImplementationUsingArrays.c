#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
typedef struct queue
{
    int count;
    int n;
    int *arr;
    int frount;
    int rear;
} queue;

void push(queue *q, int data)
{
    if (q->count == q->n)
    {
        printf("Queue is full!\n");
    }
    else
    {
        q->arr[(q->rear) % (q->n)] = data;
        q->count++;
        q->rear++;
    }
}
void setQsize(queue *q, int size)
{
    q->frount = 0;
    q->rear = 0;
    q->n = size;
    q->count = 0;
    q->arr = (int *)malloc(sizeof(int) * q->n);
}
void pop(queue *q)
{
    if (q->count < 0)
    {
        printf("The queue is empty!\n");
    }
    else
    {
        q->arr[(q->frount) % q->n] = -1;
        q->frount++;
        q->count--;
    }
}

void top(queue *q)
{
    printf("\nThe top is %d\n", q->arr[q->frount]);
}
int main()
{
    struct queue q;
    setQsize(&q, 10);
    push(&q, 23);
    push(&q, 12);
    push(&q, 9);
    push(&q, 3);
    push(&q, 34);
    push(&q, 2);
    push(&q, 12);
    push(&q, 90);
    push(&q, 27);
    push(&q, 35);
    push(&q, 2);
    push(&q, 12);
    push(&q, 90);
    top(&q);
    pop(&q);
    top(&q);
    pop(&q);
    top(&q);
    return 0;
}