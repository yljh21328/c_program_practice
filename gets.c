#include <stdio.h>

int main()
{
    char name[50];
    printf("Enter a name:");
    gets(name);
    printf("Your name is %s\n", name);

    return 0;
}
