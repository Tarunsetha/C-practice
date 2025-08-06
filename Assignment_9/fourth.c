//Q4>WAP to find the HCF of two given numbers;
#include<stdio.h>
int main(){
    int a,b,max,i=1;
    printf("enter the two number ");
    scanf("%d%d",&a,&b);

     

   for(max=a < b ? a : b;i<=max;max--){
    if(a%max==0 && b%max==0)
    break;
   }
   printf("%d",max);
  return 0;
}
