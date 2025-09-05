//Q8>WAP to print to count the digit of the given number using recursion?
#include<stdio.h>
int count_the_digit(int a);
int main(){
    int number,k;
    printf("enter the number: ");
    scanf("%d",&number);
    k=count_the_digit(number);
    printf("%d",k);
    
}
int count_the_digit(int n){
    
if(n==0)
return 0;
 
return 1+count_the_digit(n/10);

}