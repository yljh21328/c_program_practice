#include <stdio.h>

int main()
{
    int num1, num2;
    float fraction;
    char character;
    printf("Enter two numbers\n");
    scanf("%d%i", &num1, &num2);
    printf("Numbers are %d and %i\n", num1, num2);
    printf("Enter a decimal number\n");
    scanf("%f", &fraction);
    printf("Decimal number is %f\n", fraction);
    printf("Enter a character\n");
    scanf("%c", &character);
    printf("Character is %c\n", character);
    return 0;
}
