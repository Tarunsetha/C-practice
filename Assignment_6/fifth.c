#include<stdio.h>
int main(){
//Q>5Wap to check the given number is divisible by 7 or divisible by 3?
int a;
printf("enter the number ");
scanf("%d",&a);
if(a%3==0||a%7==0)
printf("Number is divisible by 3 and 7");
else
printf("Number is Not divisible by 3 and 7");
    return 0;
}