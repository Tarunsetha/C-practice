//Q10>WAF to print all the prime factors of given number?(TSRN)?
#include <stdio.h>

void prime_factor(int);

int main() {
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    prime_factor(number);
    return 0;
}

void prime_factor(int a) {
    int i;
    while (a > 1) {
        for (i = 2; i <= a; i++) { 
            if (a % i == 0) {
                printf("%d ", i);  
                a = a / i;        
                break;           
            }
        }
    }
}
