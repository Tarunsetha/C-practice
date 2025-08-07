//Q8>WAP to check the given number are in a Fabonacci series or not?
#include<stdio.h>
int main(){
int i=0,j=1,k,n,sum=0;
printf("enter the number ");
scanf("%d",&n);
 for(k=1;k<=n;k++){
  sum=i+j;
  i=j;
  j=sum;
  if(n==sum)
  break;
 }
 if(n==sum)
 printf("%d are present in the fabonacci sreies ",n);
 else
  printf("%d are not present in the fabonacci sreies ",n);
}