//Q5>Wap to calculate the sum of cube  N natural numbers?
#include<stdio.h>
int main(){
    int i=1,n,sum=0;
    printf("enter the number ");
    scanf("%d",&n);
    while(i<=n){
         sum=sum+i*i*i;
         i++;
    }
    printf("%d",sum);

    return 0;
}