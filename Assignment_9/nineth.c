//Q9>WAP to check the given number is armstrong are not ?
#include<stdio.h>
int main(){
    int n,k,x,y,sum=0;
    printf("Enter the number ");
    scanf("%d",&n);
    y=n;
    for (; n > 0; n = n / 10) {
    k=n%10;
    x=k*k*k;
    sum=sum+x;
    }
    if(y==sum)
    printf("Given number is Armstrong  number " );
    else
     printf("Given number is Not Armstrong  number " );
    
}