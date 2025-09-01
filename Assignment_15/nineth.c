//WARF to print the binary of given decimal number?
#include<stdio.h>
void convert_number_binary( int );
int main(){
    int number;
    printf("Enter the given number: ");
    scanf("%d",&number);
    convert_number_binary(number);
    return 0;
}
void convert_number_binary( int n){
int k;
k=n%2;
printf("%d",k);
if(n>1){
convert_number_binary(n=n/2);
}
}