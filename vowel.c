#include <stdio.h>

int main()
{
    char character;
    printf("Enter a character:");
    scanf("%c", &character);
    switch (character)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c is vowel\n", character);
            break;
        default:
            printf("%c is not vowel\n", character);
    }
    return 0;
}
