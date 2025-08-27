// Q6>WAF to print first n prime number ?(TSRN)
#include <stdio.h>
void print_prime_number(int,int);
int main()
{
    int firstnumber,endnumber;
    printf("Enter the number ");
    scanf("%d%d",&firstnumber,&endnumber);
    print_prime_number(firstnumber,endnumber);
   
}
void print_prime_number(int a,int b)
{
    int i,j;
    for(i=a;i<=b;i++){
        for(j=2;j<=i;j++){
            if(i%j==0)
            break;
        }
         if(i==j)
         printf("%d ",i);
                
    }
}