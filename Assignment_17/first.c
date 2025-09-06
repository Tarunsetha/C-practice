//Q1>WAP to calculate the sum of number stored in an array of size 10. Take array values from the user?
#include<stdio.h>
int main(){
    int a[10],i,sum=0;
    printf("Enter the number: ");
   for (i=0;i<10;i++){
    scanf("%d",&a[i]);
    sum=sum+a[i];
   }
   printf("Sum of array elements = %d\n", sum);
  
}