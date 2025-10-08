//Q4>Write a program in C to copy one string to another char array?
#include <stdio.h>
int main()
{
    char str[100],str2[100];
    int i;
    printf("Enter the string: ");
    fgets(str, 100, stdin);


for(i=0;str[i]!='\0';i++){
str2[i]=str[i];
}
str2[i] = '\0';
printf("copied string: %s",str2);
}