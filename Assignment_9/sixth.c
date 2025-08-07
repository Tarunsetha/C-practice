//Q6>Wap to find the Nth term of Fibonacci series?
#include<stdio.h>
int main(){
int i=0,j=1,k,n,sum=0;
printf("enter the number ");
scanf("%d",&n);
 for(k=1;k<=n;k++){
  sum=i+j;
  i=j;
  j=sum;
  
 }
 printf("Fibonacci term at position %d is: %d\n",n,sum);
}