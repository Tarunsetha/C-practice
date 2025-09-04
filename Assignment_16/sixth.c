//WARF to calculate the hcf of two number?
#include<stdio.h>
int hcf_of_two_given_number(int ,int);
  int main(){
  int a,b,k;
  printf("Enter Number: ");
  scanf("%d%d",&a,&b);
  k=hcf_of_two_given_number(a,b);
  printf("%d",k); 
}

int hcf_of_two_given_number(int a,int b){
    int n;
   n = a < b ? a : b;
  if(a%n==0&&b%n==0)
  return n;
  return hcf_of_two_given_number(a-1,b-1);
}