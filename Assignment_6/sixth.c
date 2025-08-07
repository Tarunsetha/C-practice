#include <stdio.h>
 int main(){
    //Q6> WAP to check the given number is positive,negative or ZERO?

    int number;
    printf("Enter the number ");
    scanf("%d",&number);
    if(number>=1)
    printf("given number is positive");
    else if(number<=-1)
    printf("given number is negative");
    else
    printf("given number is zero");
    return 0;
 }