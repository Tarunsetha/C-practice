//Q9>WAF to check whether a given number contains a given digit or not?(TSRS)?
#include <stdio.h>
int contain(int,int);
int main() {
int number,digit,m;
printf("enter the number ");
scanf("%d",&number);
printf("enter the digit ");
scanf("%d",&digit);

if(contain(number,digit))
printf("this number %d contain this digit %d",number,digit);
else
printf("this number %d not contain this digit %d",number,digit);
    return 0;
}
int contain(int num,int dig){
    int k=0;
    while(num>0 ){
        k=num%10;
       if(k==dig)
       return k;
        num=num/10;
    }
}