#include <stdio.h>

int main()
{
    char character;
    printf("Enter a character:");
    scanf("%c", &character);
    printf("ASCII value of %c = %d\n", character, character);
    
    return 0;
}
