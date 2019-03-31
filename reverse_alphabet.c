#include <stdio.h>
#include <ctype.h>

int main()
{
    char alphabet;
    printf("Enter a alphabet:");
    alphabet = getchar();
    printf("Reverse alphabet is:");

    if islower(alphabet)
    {
        putchar(toupper(alphabet));
        putchar('\n');
    }
    else
    {
        putchar(tolower(alphabet));
        putchar('\n');
    }
    

    return 0;
}
