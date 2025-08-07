//Q1>Print all prime numbers under 100?
#include<stdio.h>
int main(){
int i,j;
for(i=2;i<=100;i++){
    for(j=2;j<i;j++){
    if(i%j==0)
    break;
    }
    if(j==i)
    printf("%d ",i);

}
}