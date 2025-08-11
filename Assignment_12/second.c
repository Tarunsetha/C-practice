//Q2>Write the menu driven program option given below? 
//Enter 1 for addition ?
//Enter 2 for subtraction ?
//Enter 3 for multipication ?
//Enter 4 for divide ?
//Enter 5 for exit ?

#include <stdio.h>

int main()
{
    int choice, a, b;

    printf("Enter a number (1-4): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter a number : ");
        scanf("%d%d", &a, &b);
        printf(" Addition of a+b = %d", a + b);
        break;

    case 2:
        printf("Enter a number : ");
        scanf("%d%d", &a, &b);
        printf(" Subtraction of a-b = %d", a - b);
        break;

    case 3:
        printf("Enter a number : ");
        scanf("%d%d", &a, &b);
        printf(" Multiplication of a*b = %d", a * b);
        break;

    case 4:
        printf("Enter a number : ");
        scanf("%d%d", &a, &b);
        printf(" Divide of a/b = %d", a / b);
        break;

    default:
        printf("exit");
    }

    return 0;
}
