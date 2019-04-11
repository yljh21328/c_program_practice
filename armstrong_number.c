#include <stdio.h>

int main()
{
    printf("The Narcissistic(Armstrong) number between 1 to 500 are:");
    int sum = 0;
    int digit = 0;
    int num = 0;
    for (int i = 1; i <= 500; i++)
    {
        sum = 0;
        num = i;
        while (num > 0)
        {
            digit = num % 10;
            num /= 10;
            sum += digit * digit * digit;
        }
        if (sum == i)
        {
            printf("%d ", sum);
        }
    }
    puts("");
    return 0;
}
