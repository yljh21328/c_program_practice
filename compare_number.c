#include <stdio.h>

int a;
int b;
int main()
{
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    if (a == b)
    {
        printf("This two numbers are equal\n");
    }
    else if (a > b)
    {
        printf("The largest number is %03d\n", a);
        printf("The smallest number is %03d\n", b);
    }
    else
    {
        printf("The largest number is %03d\n", b);
        printf("The smallest number is %03d\n", a);
    }

    return 0;
}
