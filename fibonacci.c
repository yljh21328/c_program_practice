#include <stdio.h>

void fibonacci(int);
int main()
{
    int num;
    printf("Enter number of terms:");
    scanf("%d", &num);
    fibonacci(num);
    return 0;
}

void fibonacci(int num)
{
    int first = 0;
    int second = 1;
    int sum = 0;
    int i = 3;
    if (num <= 0)
    {
        printf("Invalid input\n");
    } else if (num == 1)
    {
        printf("%d\n", first);
    } else
    {
        printf("%d %d", first, second);
    }
    while (i <= num)
    {
        sum = first + second;
        printf(" %d", sum);
        first = second;
        second = sum;
        i++;
    }
    puts("");
}
