#include <stdio.h>

int main()
{
    char grade;
    printf("Enter your grade:");
    scanf("%c", &grade);
    switch (grade)
    {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Great\n");
            break;
        case 'C':
            printf("Good\n");
            break;
        case 'D':
            printf("Passed\n");
            break;
        case 'F':
            printf("Failed\n");
            break;
        default:
            printf("Invalid grade\n");
    }
    printf("Your grade is %c\n", grade);

    return 0;
}
