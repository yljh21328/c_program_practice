#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d", &number);
    if (number < 100)
    {
        printf("number %d < 100\n", number);
    }
    else if (number == 100)
    {
        printf("number %d is 100\n", number);
    }
    else
    {
        printf("number %d > 100\n", number);
    }

    return 0;
}
