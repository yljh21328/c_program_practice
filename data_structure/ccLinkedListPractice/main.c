#include <stdio.h>
#include <stdlib.h>

typedef struct listnode{
    char *c;
    struct listnode *next;
} ListNode;

typedef struct {
    ListNode *first;
} List;

void ListPrint(List *list) {
    if (list->first == NULL) {
        return;
    }
    ListNode *current = list->first;
    while (current != NULL) {
        printf("%s-->", current->c);
        current = current->next;
    }
    printf("\n");
}

void ListPushFront(List *list, ListNode *newNode) {
    if (newNode == NULL) {
        return;
    }
    newNode->next = list->first;
    list->first = newNode;
}

void ListPushBack(List *list, ListNode *newNode) {
    if (newNode == NULL) {
        return;
    }
    ListNode *current = list->first;
    if (current == NULL) {
        list->first = newNode;
        return;
    }
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

void ListCreate(List *list) {
    list->first = NULL;
}

void ListDelete(List *list, char *c) {
    ListNode *current = list->first;
    ListNode *previous = NULL;
    while (current != NULL && current->c != c) {
        previous = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("There is no %s in this list.\n", c);
    } else if (current == list->first) {
        list->first = current->next;
        free(current);
    } else {
        previous->next = current->next;
        free(current);
    }
}

void ListClear(List *list) {
    if (list->first == NULL) {
        return;
    }
    ListNode *current = NULL;
    while (list->first != NULL) {
        current = list->first;
        list->first = current->next;
        free(current);

    }
}

void ListReverse(List *list) {
    if (list->first == NULL || list->first->next == NULL) {
        return;
    }
    ListNode *previous = NULL;
    ListNode *current = list->first;
    ListNode *preceding = current->next;

    while (preceding != NULL) {
        current->next = previous;
        previous = current;
        current = preceding;
        preceding = preceding->next;
    }
    current->next = previous;
    list->first = current;
}

int main()
{
    List list;
    ListCreate(&list);
    ListPrint(&list);
    ListDelete(&list,"4");
    ListNode eNode = {.c="5",.next=NULL};
    ListNode cNode = {.c="3",.next=NULL};
    ListNode iNode = {.c="9",.next=NULL};
    ListNode dNode = {.c="4",.next=NULL};
    ListNode hNode = {.c="8",.next=NULL};
    ListPushBack(&list, &eNode);
    ListPushBack(&list, &cNode);
    ListPushFront(&list, &iNode);
    ListPrint(&list);
    ListPushBack(&list, &dNode);
    ListDelete(&list, "9");
    ListPrint(&list);
    ListPushFront(&list, &hNode);
    ListPrint(&list);
    ListReverse(&list);
    ListPrint(&list);
    ListClear(&list);
    ListPrint(&list);
    printf("Hello world!\n");
    return 0;
}
