//Q8>Wap to print the pattern?
#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=7;j++){
            if(j>=1&&(j<=5-i||j>=3+i)&&j<=7)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}
