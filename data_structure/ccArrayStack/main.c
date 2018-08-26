#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int top;
    int capacity;
    int *items;
} Stack;

void createStack(Stack *stack) {
    stack->top = -1;
    stack->capacity = 1;
    stack->items = malloc(stack->capacity * sizeof(int));
}

void doubleCapacity(Stack *stack) {
    stack->capacity *=2;
    int *newItems = malloc(stack->capacity * sizeof(int));
    for (int i = 0; i < stack->capacity / 2; i++) {
        newItems[i] = stack->items[i];
    }
    free(stack->items);
    stack->items = newItems;
}

int stackEmpty(Stack *stack) {
    return (stack->top == -1);
}

int stackTop(Stack *stack) {
    if (stackEmpty(stack)) {
        printf("Stack is empty.\n");
        return -1;
    }
    return stack->items[stack->top];
}

int stackSize(Stack *stack) {
    return stack->top + 1;
}

void stackPop(Stack *stack) {
    if (stackEmpty(stack)) {
        printf("Stack is empty.\n");
        return;
    }
    stack->top--;
}

void stackPush(Stack *stack, int item) {
    if (stack->top == stack->capacity - 1) {
        doubleCapacity(stack);
    }
    stack->items[++(stack->top)] = item;
}

int main()
{
    Stack stack;
    createStack(&stack);
    stackPop(&stack);
    stackPush(&stack, 14);
    stackPush(&stack, 9);
    printf("top:%d\tsize:%d\n", stackTop(&stack), stackSize(&stack));
    stackPush(&stack, 7);
    printf("top:%d\tsize:%d\n", stackTop(&stack), stackSize(&stack));
    stackPop(&stack);
    stackPop(&stack);
    printf("top:%d\tsize:%d\n", stackTop(&stack), stackSize(&stack));
    stackPop(&stack);
    printf("top:%d\tsize:%d\n", stackTop(&stack), stackSize(&stack));

    printf("Hello world!\n");
    return 0;
}
