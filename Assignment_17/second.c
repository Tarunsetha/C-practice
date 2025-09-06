//Q2>WAP to calculate the average of number stored in an array of size 10. Take array values from the user?
#include<stdio.h>
int main(){
    int a[10],i,sum=0;
    float avg;
    printf("Enter the number: ");
   for (i=0;i<10;i++){
    scanf("%d",&a[i]);
    sum=sum+a[i];
   }
   avg=sum;
     printf("Average of array elements = %.2f\n", avg);
     return 0;
  
}