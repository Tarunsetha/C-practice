#include <stdio.h>
int main()
{
    // Q9>WAP which takes the month number a an input and display the number of days in that month?
    int month;
    printf("enter the month number ");
    scanf("%d", &month);

    if (month == 1 || month == 3 || month == 5 || month == 6 || month == 8 || month == 10 || month == 12)
        printf("31 days in that month");
    else if (month == 4 || month == 7 || month == 9 || month == 11)
        printf("30 days in that month");
    else
        printf("28 days in that month");
}