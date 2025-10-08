// Q9>Write a program to convert a given string into uppercase?
#include <stdio.h>
int main()
{
    char str[100];
    int i, count = 0;
    printf("Enter the string: ");
    fgets(str, 100, stdin);

    printf("convert a given string into uppercase: ");
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        
    }

    printf("Convert a given string in uppercase: %s", str);
}