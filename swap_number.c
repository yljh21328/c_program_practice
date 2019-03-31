#include <stdio.h>

int main()
{
    int x;
    int y;
    int temp;
    puts("Method 1");
    x = 10;
    y = 5;
    printf("x = %d, y = %d\n", x, y);
    temp = x;
    x = y;
    y = temp;
    printf("After swap ...\n");
    printf("x = %d, y = %d\n", x, y);

    puts("Method 2");
    x = 11;
    y = 6;
    printf("x = %d, y = %d\n", x, y);
    x = x + y - (y = x);
    printf("After swap ...\n");
    printf("x = %d, y = %d\n", x, y);

    puts("Method 3");
    x = 12;
    y = 7;
    printf("x = %d, y = %d\n", x, y);
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("After swap ...\n");
    printf("x = %d, y = %d\n", x, y);

    puts("Method 4");
    x = 13;
    y = 8;
    printf("x = %d, y = %d\n", x, y);
    x = x * y;
    y = x / y;
    x = x / y;
    printf("After swap ...\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
