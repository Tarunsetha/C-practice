//WARF to print the reverse number of given number?
#include <stdio.h>
void reverse_number(int);
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    reverse_number(number);
}
void   reverse_number(int n){
  int k;
  if(n>0){
  k=n%10;
  printf("%d",k);
  }
 if(n>0){
   reverse_number(n=n/10);
 }
}
