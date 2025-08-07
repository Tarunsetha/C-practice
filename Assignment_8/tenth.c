//Wap to reverse the given num,ber?
#include <stdio.h>
int main(){
    int n,reverse;
    printf("enter the number");
    scanf("%d",&n);
    while(n){
     reverse=n%10;
     printf("%d",reverse);
     n=n/10;
    }

    
    }