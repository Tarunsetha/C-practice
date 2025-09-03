//WARF to print the sum of square first  natural number?
#include<stdio.h>
int sum_square_natural(int);
int main(){
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);
    printf("%d is the sum of first n square number",sum_square_natural(number));
     return 0;
}
int sum_square_natural(int n){
    int sum=0;
    if(n==0){ 
    return 0;
    }  
     return sum_square_natural(n - 1) + (n*n);
  
}

