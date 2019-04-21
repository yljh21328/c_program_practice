#include <stdio.h>

int fab(int);

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("Sum is: %d", fab(n));
    return 0;
}

int fab(int n)
{
    if (n <= 0)
    {
        printf("N should be a positive integer.");
    }
    else if (n == 1)
    {
        return 1;
    } else
    {
        return n + fab(n-1);
    }
    return 0;
}
