//Q1>Write a program to convert a given string into lowercase?
#include <stdio.h>
int main()
{
    char str[100];
    int i, count = 0;
    printf("Enter the string: ");
    fgets(str, 100, stdin);

    printf("convert a given string into Lowercase: ");
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        
    }

    printf("Convert a given string in Lowercase: %s", str);
}