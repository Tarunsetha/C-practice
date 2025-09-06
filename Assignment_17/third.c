//Q3>WAP to calculate the sum of all even number and sum of all odd numbers whicvh are  stored in an array of size 10. Take array values from the user?
#include<stdio.h>
int main(){
    int a[10],b[10],i,j,sumeven=0,sumodd=0;
    printf("Enter the even number: ");
   for (i=0;i<10;i++){
    scanf("%d",&a[i]);
    sumeven=sumeven+a[i];
   }
  
     printf("sum  of even  array elements = %d\n", sumeven);
    

    printf("Enter the even number: ");
   for (j=0;j<10;j++){
    scanf("%d",&b[j]);
    sumodd=sumodd+b[j];
   }
  
     printf("sum of odd array elements = %d\n", sumodd); 
     return 0;
  
}