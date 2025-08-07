#include<stdio.h>
int main(){
//Q>3WAP to chect the given alphabet is in uppercase or lowercase?

int a;
printf("enter the alphabet ");
scanf("%c",&a);
if(a>='A'&&a<='Z')
printf("Uppercase");
else
printf("Lowercase");
    return 0;
}