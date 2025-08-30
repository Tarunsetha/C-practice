//Q10>WAF to find the sum of first N term of the series 1!/1+2!/2+3!/3+4!/4+5!/5?(TSRS)
#include <stdio.h>
int sum_of_first(int);
int main(){
    int number,k;
    printf("Enter the number ");
    scanf("%d",&number);
    k=sum_of_first(number);
    printf("%d",k);
}
int sum_of_first(int n){
    int sum =0;
    for(int i=1;i<=n;i++){
        int fact=1;
        for(int j=1;j<=i;j++){
            fact=fact*j;
        }
        sum=sum+fact/i;
    }
    return sum;
}
