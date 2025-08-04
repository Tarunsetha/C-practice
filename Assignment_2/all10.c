#include<stdio.h>
int main(){
    float a,b,c,pi=3.14,r;
    int p,rate,t;
    // printf("enetr the number ");
    // scanf("%f %f %f",&a,&b,&c);
    // printf("the average of three number is %f",(a+b+c)/2);

    // printf("enter the radius of the circle ");
    // scanf("%f",&r);
    // printf("circumference of the circle is %f",2*pi*r);
     
    printf("enter the  number");
    scanf("%d %d %d",&p ,&rate, &t);
    printf("simple intrest is %d",(p*rate*t)/100);

    return 0;
}