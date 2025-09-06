//Q5>WAP to find the smallest number stored in an array of size 10. Take array value from the user?
#include<stdio.h>
int main(){
    int a[10],b=0,smallest,i;
    printf("Enter the number: ");
    for (i=0;i<10;i++){
    scanf("%d",&a[i]);
    smallest = (b < a[i]) ? b : a[i];
    b=smallest;
   }
   printf("the smallest elements in an array = %d\n",smallest);
  
}