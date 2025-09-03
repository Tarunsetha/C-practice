//WARF to print the sum of odd natural number?
#include<stdio.h>
int sum_odd_natural(int);
int main(){
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);
    printf("%d is the sum of first n odd number",sum_odd_natural(number));
     return 0;
}
int sum_odd_natural(int n){
    int sum=0;
    if(n==0){ 
    return 0;
    }  
     return sum_odd_natural(n - 1) + (2 * n - 1);
  
}
