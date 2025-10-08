//Q8>Write a program to count spaces in a given string.
#include<stdio.h>
int main(){
    char str[100];
    int i, count=0;
    printf("Enter the string: ");
    fgets(str,100,stdin);

    for(i=0;str[i];i++){
        if(str[i]==' ')
        count++;
    }

    printf("number of spaces in a given string %d",count);
}