//Q1>Wap to calculate the sum of N natural numbers?
#include<stdio.h>
int main(){
    int i,n,sum=0;
    scanf("%d",&n);
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("%d",sum);

    return 0;
}