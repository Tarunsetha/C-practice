//Q5>WARF to calculate the factorial of given number;
#include<stdio.h>
int fact_of_given_number(int);
int main(){
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);
    printf("%d is the sum of first n odd number",fact_of_given_number(number));
     return 0;
}
int fact_of_given_number(int n){
    if(n==1)
    return 1;
    return n*fact_of_given_number(n-1);
}