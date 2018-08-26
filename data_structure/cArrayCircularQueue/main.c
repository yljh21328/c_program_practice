#include <stdio.h>
#include <stdlib.h>

typedef struct circularQueue {
    int capacity;
    int front;
    int rear;
    int *items;
} Queue;

void createQueue(Queue *queue) {
    queue->capacity = 5;
    queue->front = 0;
    queue->rear = 0;
    queue->items = (Queue*)malloc(queue->capacity * sizeof(Queue));
}

int isEmptyQueue(Queue *queue) {
    return queue->front == queue->rear;
}

int isFullQueue(Queue *queue) {
    return (queue->rear + 1) % queue->capacity == queue->front;
}

int getFrontQueue(Queue *queue) {
    if (isEmptyQueue(queue)) {
        printf("queue is empty\n");
        return -1;
    }
    return queue->items[(queue->front+1)% queue->capacity];
}

int getRearQueue(Queue *queue) {
    if (isEmptyQueue(queue)) {
        printf("queue is empty\n");
        return -1;
    }
    return queue->items[queue->rear];
}

int getSizeQueue(Queue *queue) {
    if (queue->front < queue->rear) {
        return queue->rear - queue->front;
    } else {
        return queue->capacity - (queue->front - queue->rear);
    }
}

int getCapacityQueue(Queue *queue) {
    return queue->capacity;
}

void printQueue(Queue *queue) {
    printf("front:%d\tback:%d\tcapacity:%d\tsize:%d\n", getFrontQueue(queue), getRearQueue(queue), getCapacityQueue(queue), getSizeQueue(queue));
}

void doubleCapacityQueue(Queue *queue) {
    int *newItems = (Queue*)malloc(queue->capacity * sizeof(Queue));
    int j = queue->front;
    int size = getSizeQueue(queue);
    for (int i = 1; i <= size; i++) {
        newItems[i] = queue->items[++j % queue->capacity];
    }
    queue->rear = getSizeQueue(queue);
    queue->front = 0;
    queue->capacity *= 2;
    free(queue->items);
    queue->items = newItems;
}

void pushQueue(Queue *queue, int x) {
    if(isFullQueue(queue)) {
        doubleCapacityQueue(queue);
    }
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->items[queue->rear] = x;
}

void popQueue(Queue *queue) {
    if (isEmptyQueue(queue)) {
        printf("queue is empty\n");
    }
    queue->front = (queue->front + 1) % queue->capacity;
}

int main()
{
    Queue queue;
    createQueue(&queue);
    if (isEmptyQueue(&queue)) {
        printf("queue is empty.\n");
    }
    printQueue(&queue);
    pushQueue(&queue, 24);
    printQueue(&queue);
    pushQueue(&queue, 8);
    printQueue(&queue);
    pushQueue(&queue, 23);
    printQueue(&queue);
    popQueue(&queue);
    printQueue(&queue);
    pushQueue(&queue, 13);
    printQueue(&queue);
    popQueue(&queue);
    printQueue(&queue);
    pushQueue(&queue, 35);
    printQueue(&queue);
    pushQueue(&queue, 9);
    printQueue(&queue);
    pushQueue(&queue, 64);
    printQueue(&queue);
    printf("Hello world!\n");
    return 0;
}
