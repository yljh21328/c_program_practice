#include <stdio.h>
int main()
{
    int i = 0;
    int n = 0;
    int factorial = 1;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("Factorial of %d = %d\n", n, factorial);

    return 0;
}
