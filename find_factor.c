#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("Factors of %d are:", num);
    for (int i = 1; i <= num / 2; i++)
    {
        if (!(num%i))
        {
            printf("%d ", i);
        }
    }
    puts("");
    return 0;
}
