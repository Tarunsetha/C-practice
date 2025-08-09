#include <stdio.h>
int main()
{
    int i, j, k, l;
    for (i = 1; i <= 5; i++)
    {
        k = 1;
        l = 1;
        for (j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i && k)
            {
                printf("%d", l);
                if (j < 5)
                {
                    if ((i == 2 && l == 1) || (i == 4 && l == 2))
                        l = l;
                    else
                        l++;
                }
                else
                {
                    l--;
                }
                k = 0;
            }
            else
            {
                printf(" ");
                k = 1;
            }
        }
        printf("\n");
    }
    return 0;
}
