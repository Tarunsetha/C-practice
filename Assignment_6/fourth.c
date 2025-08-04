#include<stdio.h>
int main(){
//Q>4Wap to check the given number is divisible by 3 and divisible by 2?
int a;
printf("enter the number ");
scanf("%d",&a);
if(a%3==0&&a%2==0)
printf("Number is divisible by 3 and 2");
else
printf("Number is Not divisible by 3 and 2");
    return 0;
}