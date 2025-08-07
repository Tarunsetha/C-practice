//Q7>WAP to find the n term of Fabonacci series?
#include<stdio.h>
int main(){
int i=0,j=1,k,n,sum=0;
printf("enter the number ");
scanf("%d",&n);
printf("Fibonacci Series:");
 for(k=1;k<=n;k++){
 printf("%d ",i);
  sum=i+j;
  i=j;
  j=sum;
  
 }

}