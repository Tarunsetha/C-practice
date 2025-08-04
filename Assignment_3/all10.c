#include<stdio.h>
int main(){
     // calculate the size of char constant?
    int a;
    a=sizeof('A');
    printf("%d\n",a);
    // calculate the size of real constant?
    int x;
    x=sizeof(x);
    printf("%d\n",x);

    // WAP wit one char type variable.Assign 'A' in the variable.NOw change the value from 'A'  to 'B' using increment operator?
    int b;
    b='A';
    b++;
    printf("%c\n",b);

    //Wap to print the unit digit of the given number?
    int c=56;
   printf("%d\n",c%10);


    //Wap to print the given number without its last digit? 

      int d=145;
      printf("%d\n",d/10);

      //WAp to swap values of two int variables?
      int e=10,f=20,g;
      g=e;
      e=f;
      f=g;
      printf("e=%d f=%d\n",e,f);

      //WAp to swap values of two int variables without using third variable?
    int h=5,i=10;
    h=h+i;
    i=h-i;
    h=h-i;
    printf("h=%d i=%d\n",h,i);

    //WAp to swap values of two int variables without using third variable and arithmetic operator?
    int j=5,k=10;
    j=j*k;
    k=j/k;
    j=j/k;
    printf("j=%d k=%d\n",j,k);
    //Wap to swap values of two int variables in single line arithmetic expression?
    int l=8,m=16;
    l = l + m - (m = l);

     printf(" l=%d m=%d\n",l,m);

   return 0;
}