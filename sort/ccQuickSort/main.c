#include <stdio.h>
#include <stdlib.h>
#define swap(x,y) {int t; t = x; x = y; y = t;}

void printArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void insertionSort(int *array, int size) {
    int key;
    int j;
    for (int i = 1; i < size; i++) {
        key = array[i];
        j = i -1;
        while (key < array[j] && j >= 0) {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
}

int partition(int *array, int front, int end) {
    int pivot = array[end];
    int i = front - 1;
    for (int j = front; j < end; j++) {
        if (array[j] < pivot) {
            i++;
            swap(array[i], array[j]);
        }
    }
    i++;
    swap(array[i], array[end]);
    return i;
}

void quickSort(int *array, int front, int end) {
    if (front < end) {
        int pivot = partition(array, front, end);
        quickSort(array, front, pivot-1);
        quickSort(array,pivot+1, end);
    }
}


int main()
{
    int size = 9;
    int array[] = {9,4,1,6,7,3,8,2,5};
    printf("original:");
    printArray(array, size);
    quickSort(array, 0, size-1);
    printf("sorted:");
    printArray(array, size);
    printf("Hello world!\n");
    return 0;
}
