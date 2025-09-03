//WARF to print the sum of even natural number?
#include<stdio.h>
int sum_even_natural(int);
int main(){
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);
    printf("%d is the sum of first n even number",sum_even_natural(number));
     return 0;
}
int sum_even_natural(int n){
    int sum=0;
    if(n==0){ 
    return 0;
    }  
     return sum_even_natural(n - 1) + (2 * n );
  
}
