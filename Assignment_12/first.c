//Q1>Wap which takes the the month number and display the number of dayss in that month?

#include <stdio.h>

int main()
{
    int choice;

    printf("Enter a month number (1-12): ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("31 days in %dst month",choice);
        break;

    case 2:
        printf("28 days in %dnd month",choice);
        break;

    case 3:
        printf("31 days in %drd month",choice);
        break;

    case 4:
        printf("30 days in %dth month",choice);
        break;

    case 5:
        printf("31 days in %dth month",choice);
        break;

    case 6:
        printf("30 days in %dth month",choice);
        break;

    case 7:
        printf("31 days in %dth month",choice);
        break;

    case 8:
        printf("31 days in %dth month",choice);
        break;

    case 9:
        printf("30 days in %dth month",choice);
        break;

    case 10:
        printf("31 days in %dth month",choice);
        break;

    case 11:
        printf("30 days in %dth month",choice);
        break;

    case 12:
        printf("31 days in %dth month",choice);
        break;

    default:
        printf("%d is Invalid choice\n",choice);
    }

    return 0;
}
