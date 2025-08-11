//Q5> convert the if-else into switch case?
#include<stdio.h>
int main(){
    int choice;
    printf("enter the number : ");
    scanf("%d",&choice);
    switch(choice){
    case 1:
    printf("good");
    break;
    case 2:
    printf("better");
    break;
    case 3:
    printf("best");
    break;
    default: 
    printf("Invalid number");
    }
}