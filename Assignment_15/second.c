//WARF  to print first sum of N natural numbers?
#include<stdio.h>
int sum(int );
int main(){
    int k,n;
    printf("enter the number ");
    scanf("%d",&n);
    k=sum(n);
    printf("%d",k);
    return 0;
}
int sum(int a){
    int s;
    if(a==1)
    return 1;
    s=a+sum(a-1);
    return s;
}