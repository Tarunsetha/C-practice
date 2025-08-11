//Q4>Write the menu driven program the following option ?
//1>The three given number are length of an isosceles triangle or not?(1)
//2>The three given number are length of an right triangle or not?(2)
//3>The three given number are length of an equal triangle or not?(3)

#include<stdio.h>
int main(){
int choice,a,b,c;
printf("enter the number : ");
scanf("%d",&choice);

switch(choice){
        case 1:
    printf("Enter the three number ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b||b==c||c==a)
        printf("given triangle is isosceles triangle");
    else
        printf("given triangle is not  isosceles triangle");
    break;    

        case 2:
    printf("Enter the three number ");
    scanf("%d%d%d",&a,&b,&c);
    if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==b*b+a*a))
        printf("given triangle is Right triangle");
    else
        printf("given triangle is not  Right triangle");
    break;  

        case 3:
    printf("Enter the three number ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c)
        printf("given triangle is equal triangle");
    else
        printf("given triangle is not equal triangle");
    break;    

      default: printf("Invalid day number.\n");
  


    

}


}