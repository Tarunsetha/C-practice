// Q7>Wap count digits in a numbers?
#include <stdio.h>
int main()
{
    int i, n;
    printf("enter the number ");
    scanf("%d", &n);
    while (1)
    {
        n = n / 10;
        i++;
        if (n == 0)
            break;
    }
    printf("%d", i);

    return 0;
}