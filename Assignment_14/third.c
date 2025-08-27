// Q3>WAF to check whether a given numbner is prime or not?(TSRS)
#include <stdio.h>
int prime_or_not(int);
int main()
{
    int number, k;
    printf("ENter the number ");
    scanf("%d", &number);
    k = prime_or_not(number);
    if (k == number)
    {
        printf("%d given number is prime", number);
    }
    else
        printf("%d given number is not-prime", nuumber);
}
int prime_or_not(int a)
{
    for (int i = 2; i <= a; i++)
    {
        if (a % i == 0)
        {
            if (i == a)
            {
                return i;
            }
            else
            {
                return i;
            }
        }
    }
}