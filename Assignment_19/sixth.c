//Q6>Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
int main(){
    char str[100],ch;
    int i,j, count=0;

    printf("Enter the string ");
    fgets(str,100,stdin);

    printf("Enter a character to find its occurrence: ");
    scanf("%c",&ch);

    for(i=0;str[i];i++){
      
        if(str[i]==ch){
        count++;
        
      }
    }
        printf("The character '%c' occurs %d times in the string.\n", ch, count);

    return 0;
}