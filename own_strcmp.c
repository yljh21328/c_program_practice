#include <stdio.h>

int ownStrcmp(char[], char[]);
int main()
{
    char a[] = "hello";
    char b[] = "world";
    printf("a: %s\n", a);
    printf("b: %s\n", b);
    int result = ownStrcmp(a, b);
    if (result > 0)
    {
        puts("a > b");
    } else if (result == 0)
    {
        puts("a == b");
    } else 
    {
        puts("a < b");
    }
    return 0;
}

int ownStrcmp(char a[], char b[])
{
    int i = 0;
    while (a[i] == b[i])
    {
        if (a[i] == '\0')
        {
            return 0;
        }
        i++;
    }
    return (a[i] < b[i]) ? -1 : 1;
}
