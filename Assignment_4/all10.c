#include<stdio.h>
int main(){
    //WAp to input the three digits number in which print the sum of three  digit number?
    int a=356,sum=0;
   
    sum=sum+a%10+a/10%10+a/10%10;
    printf("%d\n",sum);


    //WAP to find the ASCII code of char '+'

    char b='+';
    printf("%d\n",b);


    //WAp to print the size of float and char and double type variable?
    int c;
    c=sizeof(c);
    float d;
    d=sizeof(d);
    char e='A';
    e=sizeof(e);
    double f;
    f=sizeof(f);
    printf("%d\n",c);
    printf("%f\n",d);
    printf("%zu\n",e);
    printf("%lf\n",f);

    //WAP to make the last digit of the number stored a variable as a zero?(eg: 2563 convert into 2560)?
    int g=2563;
    g=g/10*10;
    printf("%d\n",g);


    //WAP to input the number from the user and also inputr the digit.Append the digit in the number printing the resulting number(eg:number=234,digit=9 output=2349)?
//     int number,digit;
//     printf("enter the number and digit ");
//     scanf("%d %d",&number,&digit);
//    number=number*10+digit;
//    printf("%d\n",number);

   //ASSUME 1 price USD is INR is 84.23.WAP to take the amount in INR and convert into USD?
//    float INR,k;
//    printf("enter the INR and convert into USD ");
//    scanf("%f",&INR);
//    k=INR/84.23;
//    printf("USD = %0.2f\n",k);
   

   //WAp to take the three digit number from the  user and rotate its digit by one position towards the right?
   int h,l,m;
   printf("enter the number ");
   scanf("%d",&h);
   l=h%10*100;
   m=h/10;

 
   printf("%d",l+m);

   return 0;


}