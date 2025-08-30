//WARF  to print first  N odd natural numbers?
#include<stdio.h>
void number(int );
int main(){
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    number(n);
    return 0;
}
void number(int a){
    if(a>0){
    number(a-1);
    printf("%d ",2*a-1);
    }
}