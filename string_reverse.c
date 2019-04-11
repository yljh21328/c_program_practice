#include <stdio.h>

int main()
{
    char str[10];
    char rev[10];
    printf("Enter a string:");
    scanf("%s", str);
    printf("Original String:%s\n", str);
    int i = 0;
    int j = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    i--;
    while (i >= 0)
    {
        rev[j++] = str[i--];
    }
    rev[j] = '\0';
    printf("Reverse String:%s\n", rev);
    return 0;
}
