#include <stdio.h>

int main()
{
    int num = 0;
    int sum = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    int count = num;
    while (count > 0)
    {
        sum = sum * 10 + count % 10;
        count /= 10;
    }
    if (num == sum)
    {
        printf("This number is palindrome.\n");
    } else
    {
        printf("This number is not palindrome.\n");
    }
    return 0;
}
