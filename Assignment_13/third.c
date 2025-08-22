//Q3>WAF to check wheather given number is odd or even .if even than return 1 otherwise return 0?
#include <stdio.h>
int check(int);
int main(){
    int a,s;
    printf("emter the number ");
    scanf("%d",&a);
    s= check(a);

    if (s == 1)
        printf("The number %d is Even\n", a);
    else
        printf("The number %d is Odd\n", a);

    return 0;

}
int check(int n){
 if(n%2==0)
 return 1;
 else
 return 0;
}