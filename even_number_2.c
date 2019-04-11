#include <stdio.h>

int main()
{
    int num = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num / 2 * 2 == num)
    {
        printf("%d is even\n", num);
    } else 
    {
        printf("%d is odd\n", num);
    }
    return 0;
}
