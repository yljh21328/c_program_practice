#include <stdio.h>

int main()
{
    int num = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    int count = 0;
    while (num > 0)
    {
        count += num % 10;
        num /= 10;
    }
    printf("Sum of digit is: %d\n", count);
}
