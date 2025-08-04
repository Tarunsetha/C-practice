#include<stdio.h>
int main(){

    //Write to program check the given number is positive or non-positive?

    // int a;
    // printf("enter the number =");
    // scanf("%d",&a);
    // if(a>0)
    //     printf("given number is positive ");
    // else
    //  printf("given number is non-positive ");

     //Write to program check the given number is divisble by 5 or not?

    //  int b;
    // printf("enter the number =");
    // scanf("%d",&b);
    // if(b%5)
    //     printf("given number is not divided by 5 ");
    // else
    //  printf("given number is  divided by 5 ");
  

  //Write to program check the given number is even or odd?

    //     int c;
    // printf("enter the number =");
    // scanf("%d",&c);
    // if(c%2)
    //     printf("given number is odd number");
    // else
    //  printf("given number is even number ");

   //Write to program check the given number is even or odd without using the % opertaor?
    //         int d,e;
    // printf("enter the number =");
    // scanf("%d",&d);
    // e=d/2;
    // if(d-e==e)
    //     printf("given number is even number");
    // else
    //  printf("given number is odd number ");

    //Write to program check the given number is even or odd using the bitwise opertor?

    //      int f;
    // printf("enter the number =");
    // scanf("%d",&f);
    // if(f^2&&f%2==0)
    //     printf("given number is even  number");
    // else
    //  printf("given number is odd number ");

     //Write to program  check the given number is Three digit number or not?
    // int g;
    // printf("Enter the number = ");
    // scanf("%d",&g);
    // if(g>99&&g<1000)
    // printf("given number is THREE DIGIT NUMBER");
    // else
    // printf("given number is not THREE DIGIT NUMBER");


     //Write to program to print the greater number between two numbers. Print one number if both are the same?
    // int h,i;
    // printf("enter the number = ");
    // scanf("%d%d",&h,&i);
    // if(h>i)
    // printf("h is  greater than i is %d",h);
    // else
    //     printf("i is  greater than h is %d",h);

     //Write to program  check whether roots of a given quatratic equation are real & distinct, Real & equal or Imaginary roots
    // int j,k,l,sum;
    // printf("enter the numebr ");
    // scanf("%d%d%d",&j,&k,&l);
    // sum=k*k-4*j*l;
    // if(sum>0){
    //     printf("Real & distinct");
    // }
    // else  if(sum==0){
    //     printf("Real & equal");
    // }
    //     else  if(sum<0){
    //     printf("Imaginary roots");
    // }


//   Write a program  check whether a given year is leap year or not?
    // int year;

    // printf("Enter a year: ");
    // scanf("%d", &year);

    // if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
    //     printf("%d is a Leap Year.\n", year);
    // } else {
    //     printf("%d is NOT a Leap Year.\n", year);
    // }
    

    //Write the program to find the greatest among three given numbers. Print number once if the greatest numbers appears two or three times?
    int a,b,c;
    printf("enter the number ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("%d ",a);
    else if(b>c)
    printf("%d ",b);
    else
    printf("%d ",c);


    return 0;
}
