//Q7>Wap to print the pattern?
#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        k=65;
        for(j=1;j<=5;j++){
            if(j>=i)
            printf("%c",k);
            else
            printf(" ");
            k++;
        }
        printf("\n");
    }
}