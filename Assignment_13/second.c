//Q2>WAF calculate the simple interest ?(TSRS)
#include<stdio.h>
int simple_interest(int ,int ,int);
int main(){
    int p,r,t;
    float s;
    printf("enter the numbers ");
    scanf("%d%d%d",&p,&r,&t);
    s=simple_interest(p,r,t);
    printf("%.2f",s);
    return 0;

}
int simple_interest(int a,int b,int c){
    float d;
    d=(a*b*c)/100;
    return d;

}
