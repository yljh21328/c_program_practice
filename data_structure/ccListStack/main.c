#include <stdio.h>
#include <stdlib.h>

typedef struct stackNode {
    int data;
    struct stackNode *next;
} StackNode;

typedef struct {
    StackNode *top;
    int size;
} Stack;

void createStack(Stack *stack) {
    stack->top = NULL;
    stack->size = 0;
}

int isEmptyStack(Stack *stack) {
    return (stack->size == 0);
}

void pushStack(Stack *stack, int item) {
    StackNode *node = (StackNode*)malloc(sizeof(StackNode));
    node->data = item;
    node->next = NULL;
    if (isEmptyStack(stack)) {
        stack->top = node;
        (stack->size)++;
        return;
    }
    node->next = stack->top;
    stack->top = node;
    (stack->size)++;
}

void popStack(Stack *stack) {
    if (isEmptyStack(stack)) {
        printf("stack is empty.\n");
        return;
    }
    StackNode *node = stack->top;
    stack->top = stack->top->next;
    free(node);
    (stack->size)--;
}

int topStack(Stack *stack) {
    if (isEmptyStack(stack)) {
        printf("stack is empty.\n");
        return -1;
    }
    return stack->top->data;
}

int getSizeStack(Stack *stack) {
    return stack->size;
}
int main()
{
    Stack stack;
    createStack(&stack);
    popStack(&stack);
    pushStack(&stack, 32);
    pushStack(&stack, 4);
    printf("top:%d\tsize:%d\n", topStack(&stack), getSizeStack(&stack));
    pushStack(&stack, 15);
    printf("top:%d\tsize:%d\n", topStack(&stack), getSizeStack(&stack));
    popStack(&stack);
    popStack(&stack);
    printf("top:%d\tsize:%d\n", topStack(&stack), getSizeStack(&stack));
    popStack(&stack);
    printf("top:%d\tsize:%d\n", topStack(&stack), getSizeStack(&stack));
    printf("Hello world!\n");
    return 0;
}
