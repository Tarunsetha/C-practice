// Q2> Write a program to print the prime number between two given number?
#include <stdio.h>
int main()
{
    int start, end, i, j;
    printf("enter the  two number ");
    scanf("%d%d", &start, &end);
    for (i = start; i < end; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (j == i)
            printf("%d ", i);
    }
}