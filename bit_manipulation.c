#define BIT3 (0x1 << 3)
#include <stdio.h>

void set_bit3();
void clear_bit3();
void get_bit3();
static int a;

int main()
{
    a = 0;
    printf("a:%d\n", a);
    set_bit3();
    printf("a:%d\n", a);
    clear_bit3();
    printf("a:%d\n", a);
    get_bit3();
    printf("a:%d\n", a);
    set_bit3();
    printf("a:%d\n", a);
    get_bit3();
    printf("a:%d\n", a);
    return 0;
}

void set_bit3()
{
    a |= BIT3;
}

void clear_bit3()
{
    a &= ~BIT3;
}

void get_bit3()
{
    a = (a & BIT3) >> 3;
}
