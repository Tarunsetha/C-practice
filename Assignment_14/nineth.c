//Q9>WAF to print all the Armstrong numbers between to given numbers?(TSRN)
#include <stdio.h>

void armstrong_between(int, int);

int main() {
    int start, end;
    printf("Enter two numbers (range): ");
    scanf("%d %d", &start, &end);

    armstrong_between(start, end);

    return 0;
}

void armstrong_between(int a, int b) {
    int num, temp, digit, sum, n, i;

    printf("Armstrong numbers between %d and %d are:\n", a, b);

    for (num = a; num <= b; num++) {
        sum = 0;
        temp = num;

        n = 0;
        int t = num;
        while (t > 0) {   
            n++;
            t =t/ 10;
        }

        t = num;
        while (t > 0) {   
            digit = t % 10;
            int power = 1;
            for (i = 0; i < n; i++) {
                power =power*digit;
            }
            sum =sum+ power;
            t =t/10;
        }

        if (sum == num) {
            printf("%d\n", num);
        }
    }
}
