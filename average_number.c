#include <stdio.h>

int main()
{
    int num = 0;
    int count = 0;
    printf("Enter number of elements:");
    scanf("%d", &count);
    int i = 0;
    int sum = 0;
    while (i< count) {
        printf("Element[%d]:", i++);
        scanf("%d", &num);
        sum += num;
    }
    printf("Average of these elements is %.2f", (float)(sum/count));
}
