#include <stdio.h>

int nc(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("Sum is %d\n", nc(n));
    return 0;
}

int nc(int n)
{
    int sum = 0;
    for (int i = 2; i <= n; i++)
    {
        sum += i * (i - 1);
    }
    return sum;
}
