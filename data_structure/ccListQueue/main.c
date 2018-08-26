#include <stdio.h>
#include <stdlib.h>

typedef struct queueNode {
    int data;
    struct queueNode *next;
} QueueNode;

typedef struct {
    QueueNode *front;
    QueueNode *rear;
    int size;
} ListQueue;

void createQueue(ListQueue *queue) {
    queue->front = NULL;
    queue->rear = NULL;
    queue->size = 0;
}

int isEmptyQueue(ListQueue *queue) {
    return (queue->size == 0);
}
void pushQueue(ListQueue *queue, int x) {
    QueueNode *node = (QueueNode*)malloc(sizeof(QueueNode));
    node->data = x;
    node->next = NULL;
    if (isEmptyQueue(queue)) {
        queue->front = node;
        queue->rear = node;
        (queue->size)++;
        return;
    }

    queue->rear->next = node;
    queue->rear = node;
    (queue->size)++;
}

void popQueue(ListQueue *queue) {
    if (isEmptyQueue(queue)) {
        printf("queue is empty.\n");
        return;
    }
    QueueNode *node = queue->front;
    queue->front = queue->front->next;
    free(node);
    (queue->size)--;
}

int getFontQueue(ListQueue *queue) {
    if (isEmptyQueue(queue)) {
        printf("queue is empty.\n");
        return -1;
    }
    return queue->front->data;
}

int getRearQueue(ListQueue *queue) {
    if (isEmptyQueue(queue)) {
        printf("queue is empty.\n");
        return -1;
    }
    return queue->rear->data;
}

int getSizeQueue(ListQueue *queue) {
    return queue->size;
}


int main()
{
    ListQueue queue;
    createQueue(&queue);
    if (isEmptyQueue(&queue)) {
        printf("queue is empty.\n");
    }
    pushQueue(&queue, 24);
    printf("Front:%d\tRear:%d\n", getFontQueue(&queue), getRearQueue(&queue));
    pushQueue(&queue, 8);
    printf("Front:%d\tRear:%d\n", getFontQueue(&queue), getRearQueue(&queue));
    pushQueue(&queue, 23);
    printf("Front:%d\tRear:%d\n", getFontQueue(&queue), getRearQueue(&queue));
    pushQueue(&queue, 13);
    printf("Front:%d\tRear:%d\n", getFontQueue(&queue), getRearQueue(&queue));
    popQueue(&queue);
    printf("Front:%d\tRear:%d\n", getFontQueue(&queue), getRearQueue(&queue));
    pushQueue(&queue, 35);
    printf("Front:%d\tRear:%d\n", getFontQueue(&queue), getRearQueue(&queue));
    popQueue(&queue);
    printf("Front:%d\tRear:%d\n", getFontQueue(&queue), getRearQueue(&queue));
    popQueue(&queue);
    printf("Front:%d\tRear:%d\n", getFontQueue(&queue), getRearQueue(&queue));
    popQueue(&queue);
    printf("Front:%d\tRear:%d\n", getFontQueue(&queue), getRearQueue(&queue));
    popQueue(&queue);
    printf("Front:%d\tRear:%d\n", getFontQueue(&queue), getRearQueue(&queue));
    popQueue(&queue);
    printf("Front:%d\tRear:%d\n", getFontQueue(&queue), getRearQueue(&queue));
    printf("Hello world!\n");
    return 0;
}
