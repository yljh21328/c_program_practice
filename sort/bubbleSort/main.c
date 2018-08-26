#include <stdio.h>
#include <stdlib.h>

void printArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void bubbleSort(int *array, int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
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
int main()
{
    int array[6] = {5,3,1,2,6,4};
    printf("original:");
    printArray(array, 6);
    bubbleSort(array, 6);
    printf("sorted:");
    printArray(array, 6);
    printf("Hello world!\n");
    return 0;
}
