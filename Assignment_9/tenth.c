// Q9>WAP to print the  armstrong number under 1000 ?

#include<stdio.h>

int main(){
    int i, num, digit, sum;

    for(i = 100; i <= 999; i++){
        num = i;
        sum = 0;

        while(num > 0){
            digit = num % 10;
            sum = sum + (digit * digit * digit);
            num = num / 10;
        }

        if(sum == i){
            printf("%d ", i);
        }
    }

    return 0;
}
