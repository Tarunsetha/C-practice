#include<stdio.h>
int main(){
//Q8>Wap which takes the length of the triangle as an input.Display the whether triangle is valid or not ?
int a,b,c;
printf("Enter the length of the triangle");
scanf("%d%d%d",&a,&b,&c);
if(a+b>c&&b+c>b&&b+c>a)
printf("Triangle is valid");
else
printf("Triangle is not valid");
return 0;
}
