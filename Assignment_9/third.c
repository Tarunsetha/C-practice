//Q3>Wap to print find the next  prime number of given prime number?
#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter the number: ");
    scanf("%d", &n);

   
    for(n = n + 1; ; n++) {

       

        for(j = 2; j <= n ; j++) {
            if(n % j == 0) {
                break;
            }
        }

        if(j==n) {
            printf("Next prime is: %d\n", n);
            break; 
        }
    }

    return 0;
}
