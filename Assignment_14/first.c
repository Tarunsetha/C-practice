//Q1>Write the functiopn to calculate the LCM of two number?(TSRS)

#include<stdio.h>
int lcm(int ,int );
int main(){
    int n,m,c;
    printf("Enter two number ");
    scanf("%d%d",&n,&m);
    c=lcm(n,m);
    printf("Lcm of two number is %d",c);

}
int lcm(int a,int b ){
    int max;
     for(max=a > b ? a : b;max<=a*b;max++){
    if(max%a==0 && max%b==0)
    break;
   }
   return max;
}