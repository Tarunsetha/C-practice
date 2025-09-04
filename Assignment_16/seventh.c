//WARF to print first N number of Fibonacci series?
#include<stdio.h>
void fibonacci_series(int,int,int);
int main(){
  int number,a=0,b=1;
  printf("Enter the number: ");
  scanf("%d",&number);
  fibonacci_series(number,a,b);
}
void fibonacci_series(int n,int a,int b){
    int sum=0;
    if(n<=0)
    return;
    sum=a+b;
    printf("%d ",sum);
    a=b;
    b=sum;
    return fibonacci_series(n-1,a,b);
}