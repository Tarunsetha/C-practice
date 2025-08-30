//Q6>WARF to print the first N even natural number ?
#include<stdio.h>

void even_number(int );
int main(){
    int number;
    printf("enter the number ");
    scanf("%d",&number);
    even_number(number);
}
    
void even_number(int n){
    if(n>0){
        even_number(n-1);
        printf("%d ",2*n);
    }
}