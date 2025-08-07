//Q5> Wap to check the whether two given number are co-prime or not?
#include<stdio.h>
int main(){
    int a,b,max,i=1;
    printf("enter the two number ");
    scanf("%d%d",&a,&b);

     

   for(max=a < b ? a : b;i<=max;max--){
    if(a%max==0 && b%max==0)
    break;
   }
   if(max==1)
   printf(" given number is co-prime ");
   else
   printf(" given number is not co-prime ");
  return 0;
}
