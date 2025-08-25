//Q2>Write the functiopn to calculate the HCF of two number?(TSRS)

#include<stdio.h>
int hcf (int ,int );
int main(){
    int n,m,c;
    printf("Enter two number ");
    scanf("%d%d",&n,&m);
    c=hcf(n,m);
    printf("HCF of two number is %d",c);

}
int hcf(int a,int b ){
    int max;
     for(max=a < b ? a : b;max;max--){
    if(a%max==0 && b%max==0)
    break;
   }
   return max;
}