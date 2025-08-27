// Q5>WAF to print first n prime number ?(TSRN)
#include <stdio.h>
int print_first_n_prime_number(int);
int main()
{
    int number;
    printf("Enter the number ");
    scanf("%d", &number);
    print_first_n_prime_number(number);
   
}
int print_first_n_prime_number(int a)
{
    int i,j;
    for(i=2;i<=a;i++){
        for(j=2;j<=i;j++){
            if(i%j==0)
            break;
        }
         if(i==j)
         printf("%d ",i);
                
    }
}