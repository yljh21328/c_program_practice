#include <stdio.h>

int main()
{
    int num;
    int sum = 0;
    int temp = 0;
    printf("Enter number of elements:");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("Element[%d]:",i);
        scanf("%d", &temp);
        sum += temp;
    }
    printf("Sum of elements is %d", sum);
    return 0;
}
