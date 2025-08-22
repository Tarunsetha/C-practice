//Q4>WAF to print the first N natural numbers ?(TSRN)
#include <stdio.h>
void natural_number(int );
int main(){
 int n,s;
 printf("enter the number ");
 scanf("%d",&n);
 natural_number(n);

}
void natural_number(int a)
{
   
    for(int b=1;b<=a;b++){
        printf(" %d",b);
    }

}