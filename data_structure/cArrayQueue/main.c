#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int capacity;
    int front;
    int rear;
    int *items;
} Queue;

void createQueue(Queue *queue) {
    queue->capacity = 5;
    queue->front = -1;
    queue->rear = -1;
    queue->items = (int*)malloc(queue->capacity * sizeof(int));
}

void doubleCapacityQueue(Queue *queue) {
    queue->capacity *= 2;
    int *newItem = (int*)malloc(queue->capacity * sizeof(int));
    int j = -1;
    for (int i = queue->front + 1; i <= queue->rear; i++) {
        j++;
        newItem[j] = queue->items[i];
    }
    queue->front = -1;
    queue->rear = j;
    free(queue->items);
    queue->items = newItem;
}

int isFullQueue(Queue *queue) {
    return (queue->rear + 1 == queue->capacity);
}

int isEmptyQueue(Queue *queue) {
    return (queue->front == queue->rear);
}

int getFrontQueue(Queue *queue) {
    if (isEmptyQueue(queue)) {
        printf("queue is empty.\n");
        return -1;
    }
    return queue->items[queue->front+1];
}

int getRearQueue(Queue *queue) {
    if (isEmptyQueue(queue)) {
        printf("queue is empty.\n");
        return -1;
    }
    return queue->items[queue->rear];
}

int getSizeQueue(Queue *queue) {
    if (isEmptyQueue(queue)) {
        printf("queue is empty.\n");
        return -1;
    }
    return (queue->rear - queue->front);
}

int getCapacityQueue(Queue *queue) {
    return queue->capacity;
}

void printQueue(Queue *queue) {
    printf("front:%d\trear:%d\tcapacity:%d\tsize:%d\n", getFrontQueue(queue), getRearQueue(queue), getCapacityQueue(queue), getSizeQueue(queue));
}

void pushQueue(Queue *queue, int x) {
    if (isFullQueue(queue)) {
        doubleCapacityQueue(queue);
    }
    queue->items[++queue->rear] = x;
}

void popQueue(Queue *queue) {
    if (isEmptyQueue(queue)) {
        printf("queue is empty.\n");
        return;
    }
    queue->front++;
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
    printf("Hello world!\n");
    return 0;
}
