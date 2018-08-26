#include <stdio.h>
#include <stdlib.h>
#define swap(x,y) {int t = x; x = y; y = t;}

void printArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        if (i == 0) {
            continue;
        }
        printf("%d ", array[i]);
    }
    printf("\n");
}

void maxHeapify(int *array, int root, int size) {
    int left = root * 2;
    int right = root * 2 + 1;
    int largest = root;

    if (left <= size && array[left] > array[largest]) {
        largest = left;
    }
    if (right <= size && array[right] > array[largest]) {
        largest = right;
    }

    if (largest != root) {
        swap(array[largest], array[root]);
        maxHeapify(array, largest, size);
    }
}

void buildMaxHeap(int *array, int size) {
    for (int i = (size)/2; i >= 1; i--) {
        maxHeapify(array, i, size);
    }
}

void heapSort(int *array, int size) {
    buildMaxHeap(array, size-1);

    size = size - 1;
    for (int i = size; i >= 2; i--) {
        swap(array[1], array[i]);
        size--;
        maxHeapify(array, 1, size);
    }
}

int main()
{
    int array[] = {0,9,4,1,6,7,3,8,2,5};
    printf("original:");
    printArray(array, 10);
    heapSort(array, 10);
    printf("sorted:");
    printArray(array, 10);
    printf("Hello world!\n");
    return 0;
}
