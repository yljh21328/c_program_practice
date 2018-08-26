#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define swap(x,y) {int t = x; x = y; y = t;}

void printArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void merge(int *array, int front, int mid, int end) {
    int lSize = mid - front + 1;
    int rSize = end - mid;

    int *lArray = (int*)malloc(lSize * sizeof(int));
    int *rArray = (int*)malloc(rSize * sizeof(int));
    memcpy(lArray, array+front, lSize * sizeof(int));
    memcpy(rArray, array+mid+1, rSize * sizeof(int));
    for (int i = 0; i < lSize; i++) {
        printf("%d ", lArray[i]);
    }
    printf("\n");
    for (int i = 0; i < rSize; i++) {
        printf("%d ", rArray[i]);
    }
    printf("\n");
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < lSize && j < rSize) {
        if (lArray[i] <= rArray[j]) {
            array[front + k++] = lArray[i++];
        } else {
            array[front + k++] = rArray[j++];
        }
    }

    while (i < lSize) {
        array[front + k++] = lArray[i++];
    }
    while (j < rSize) {
        array[front + k++] = rArray[j++];
    }
    printArray(array, 8);
}

void mergeSort(int *array, int front, int end) {
    if (front < end) {
        int mid = (front + end) / 2;
        mergeSort(array, front, mid);
        mergeSort(array, mid+1, end);
        merge(array, front, mid, end);
    }
}

int main()
{
    int array[] = {5,3,8,6,2,7,1,4};
    int size = sizeof(array) / sizeof(array[0]);
    printf("original:");
    printArray(array, size);
    mergeSort(array, 0, size-1);
    printf("sorted:");
    printArray(array, size);
    printf("Hello world!\n");
    return 0;
}
