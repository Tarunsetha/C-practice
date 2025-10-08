//Q5>Write a program to find first occurrence of a given character in a given string?
#include <stdio.h>
int main()
{
    char str[100],ch;
    int i,postion;
    printf("Enter the string: ");
    fgets(str, 100, stdin);

    printf("Enter a character to find: ");
    scanf("%c",&ch);

    for(i=0;str[i]!='\0';i++){
     if(str[i]==ch){
        break;
     }
    }
    printf("The first occurrence of %c is at position = %d",ch,i+1);
}