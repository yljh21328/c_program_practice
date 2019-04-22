#include <stdio.h>

#define MAX_SIZE 10

void push(int);
int pop();

int stack[MAX_SIZE];
int top = 0;

int main()
{
    push(0);
    push(1);
    push(2);
    pop();
    pop();
    pop();
    pop();
    return 0;
}

void push(int element)
{
    if (top == MAX_SIZE)
    {
        printf("Stack is full\n");
    }
    else {
        printf("%d pushed\n", element);
        stack[top++] = element;
    }
}

int pop()
{
    if (top == 0)
    {
        printf("Stack is empty\n");
    } else
    {
        printf("%d poped\n", stack[top -1]);
        return stack[--top];
    }
    return 0;
}
