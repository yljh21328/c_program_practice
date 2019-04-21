#define SET_BIT(x, n) ((x) |= (1 << (n)))
#define CLR_BIT(x, n) ((x) &= (~(1 << (n))))
#define CHK_BIT(x, n) (((x) & (1 << (n))) != 0)
#define FLIP_BIT(x, n) ((x) ^= (1 << (n))) 
#include <stdio.h>

int main()
{
    int a = 0;
    printf("a:%d\n", a);
    SET_BIT(a, 3);
    printf("a:%d\n", a);
    printf("CHK:%d\n", CHK_BIT(a, 3));
    CLR_BIT(a, 3);
    printf("a:%d\n", a);
    CHK_BIT(a, 3);
    printf("CHK:%d\n", CHK_BIT(a, 3));
    FLIP_BIT(a, 3);
    printf("a:%d\n", a);
    FLIP_BIT(a, 3);
    printf("a:%d\n", a);
    return 0;
}
