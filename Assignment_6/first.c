#include<stdio.h>
int main(){
    //Q1>WAP which takes the cost price and selling price of the product from the user.Now calculate and print profit and loss perecentage?

     
    float cp,sp;

    printf("Enter the cp  and sp ");
    scanf("%f%f",&cp,&sp);
    if(cp<sp){
    printf("profit = %0.2f%%",(sp-cp)/cp*100);
    }

    else{
   printf("loss = %0.2f%%",(cp-sp)/cp*100);
    }
   


}