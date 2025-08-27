//Q7>WAF to print N terms of fabonacci series?(TSRN)
#include <stdio.h>
void fabonacci_series(int);
int main()
{
    int number;
    printf("Enter the number ");
    scanf("%d", &number);
    fabonacci_series(number);
   
}
void fabonacci_series(int a){
      int i=0,j=1,k;
    for(int l=1;l<=a;l++){
    k=i+j;
    i=j;
    j=k;
      printf("%d ",k);
    }


};