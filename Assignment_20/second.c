//Q2>Write a program to reverse a string?
#include <stdio.h>
int main()
{
    char str[100],str2[100];
    int i,j, length = 0;
    printf("Enter the string: ");
    fgets(str, 100, stdin);

   
   for (i = 0; str[i] != '\0'; i++) {
    if (str[i] == '\n')
        break;
    length++;
}


   for(i=length-1,j=0;i>=0;i--,j++){
    str2[j]=str[i];
   }
   str2[j] = '\0';

    printf("To reverse a string:: %s", str2);
}

