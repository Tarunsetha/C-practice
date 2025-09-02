//WARF to print the Octal of given decimal number?
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
if(n>=1){
k=n%8;
printf("%d",k);
}
if(n>=1){
convert_number_binary(n=n/8);
}
}