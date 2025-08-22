//Q6>WAF to calculate the factorial of the number?(TSRS)
#include <stdio.h>
int factorial(int);
int main(){
    int n,s;
    printf("enter the number ");
    scanf("%d",&n);
    s=factorial(n);
    printf("%d",s);
    return 0;

}
int factorial(int a){
  
    for(int i=1,k=1;i<=a;i++){
     k=k*i;
    }
    return k;
}