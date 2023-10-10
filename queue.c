#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int front,rear,size;
    unsigned int capacity;
    int *arr;
};

struct queue *createQueue(unsigned int capacity){
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->capacity = capacity;
    q->front = q->size = 0;
    q->rear = capacity - 1;
    q->arr = (int *)malloc(q->capacity * sizeof(int));
    return q;
}

int isFull(struct queue *q){
    return (q->size == q->capacity);
}

int isEmpty(struct queue *q){
    return (q->size == 0);
}
void enqueue(struct queue *q, int val){
    if (isFull(q))
        return;
    q->size++;
    q->rear = (q->rear + 1) % q->capacity;
    printf("rear = %d\n",q->rear);
    q->arr[q->rear] = val;

}

int dequeue(struct queue *q){
    if (isEmpty(q))
        return -1;
    int val = q->arr[q->front];
    q->front = (q->front + 1) % q->capacity;
    q->size = q->size - 1;
    return val;
}

int front(struct queue *q){
    if (isEmpty(q))
        return -1;
    return q->arr[q->front];
}

int rear(struct queue *q){
    if (isEmpty(q))
        return -1;
    return q->arr[q->rear];
}



int main(){

    struct queue *q = createQueue(10);
    enqueue(q, 10);
    enqueue(q, 20);
    int n = dequeue(q);

    printf("%d dequeued\n", n);
    printf("Front : %d\n", front(q));
    printf("Rear : %d\n", rear(q));

    for (int i = 0; i <= q->size; i++)
{
    printf("%d\n",q->arr[i]);
}

printf("n = %d\n",n);
    return 0;

}