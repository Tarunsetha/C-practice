//Q3>Wap to calculate the sum of odd N natural numbers?
#include<stdio.h>
int main(){
    int i=1,n,sum=0;
    scanf("%d",&n);
    while(i<=n){
        sum=sum+i;
        i=i+2;
    }
    printf("%d",sum);

    return 0;
}