//Q9>WAF to print all the Armstrong numbers between to given numbers?(TSRN)
#include<stdio.h>
void armstrong(int ,int);
int main(){
    int d,e;
    printf("enter the number ");
    scanf("%d%d",&d,&e);
    armstrong(d,e);
}
void armstrong(int n,int m){
    int a,sum=0,b=1;
    for(int i=n;i<=m;i++){
        a=n%10;
        n=n/10;
        for(j=1;j<=i;j++){
            b=b*a;
             sum=sum+b;
        }
        

    }
}
