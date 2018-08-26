#include <stdio.h>
#include <stdlib.h>

void printArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void selectionSort(int *array, int size) {
    int select;
    int temp;
    for (int i = 0; i < size; i++) {
        select = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[select]) {
                select = j;
            }
        }
        if (i != select) {
            temp = array[select];
            array[select] = array[i];
            array[i] = temp;
        }
    }
}
int main()
{
    int array[6] = {5,3,1,2,6,4};
    printf("original:");
    printArray(array, 6);
    selectionSort(array, 6);
    printf("sorted:");
    printArray(array, 6);
    printf("Hello world!\n");
    return 0;
}
