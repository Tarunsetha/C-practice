//// Q4>WAF to find the next prime number of a given number ?(TSRS)
#include <stdio.h>
int print_next_prime_number(int);
int main()
{
    int number, k;
    printf("Enter the number ");
    scanf("%d", &number);
    k = print_next_prime_number(number);
    printf("%d",k);
}
int print_next_prime_number(int a)
{
    int i,j;
    for(i=a+1;  ;i++){
        for(j=2;j<i;j++){
            if(i%j==0)
            break;
        }
         if(i==j){
         return i;
         }
                
    }
}