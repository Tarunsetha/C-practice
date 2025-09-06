//Q4>WAP to find the greatest number stored in an array of size 10. Take array value from the user?
#include<stdio.h>
int main(){
    int arr[10],biggest,i;
    printf("Enter the number: ");
    for (i=0;i<10;i++){
    scanf("%d",&arr[i]);
   }
   biggest=arr[i];
      for (i = 1; i < 10; i++) {
        if (arr[i] > biggest) {
            biggest = arr[i];
        }
    }
   printf("the smallest elements in an array = %d\n",biggest);
  
}