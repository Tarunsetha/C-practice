//Q4>Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29])?
#include<stdio.h>
   void left (int b[],int size,int n);
    int main(){
    int a[5]={32,29,40,12,70},n;
   
    printf("Enter the number: ");
    scanf("%d",&n);
    left(a,5,n);
}
void left (int b[],int size,int n){
  int temp;
  temp=b[0];
  for(int i=0+1;i<5;i++){
   
  }
}