#include <stdio.h>

int main()
{
    int i = 10;
    do
    {
        printf("i = %02d\n", i);
        i--;
    } while (i > 0);
    return 0;
}
