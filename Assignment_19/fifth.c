//Q5>Write a program to calculate the length of the string. (without using builtin method)?
#include<stdio.h>
int main(){
    char str[100];
    int i, count;
    printf("Enter the string ");
    fgets(str,100,stdin);


      for(i = 0; str[i]; i++) {
        count++;
    }

    printf("Length of the string is: %d\n", count);

    return 0;
}

