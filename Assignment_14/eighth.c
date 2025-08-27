// Q8>WAF to print the PASCAL triangle?(TSRN)
#include <stdio.h>

void pascal_triangle(int);
long long factorial(int);
long long combination(int, int);

int main() {
    int lines;
    printf("Enter the number of lines: ");
    scanf("%d", &lines);
    pascal_triangle(lines);
    return 0;
}

void pascal_triangle(int line) {
    int i, j;
    for (i = 0; i < line; i++) {
        for (j = 0; j < line - i - 1; j++) {
            printf("  ");
        }
        for (j = 0; j <= i; j++) {
            printf("%4lld", combination(i, j));
        }
        printf("\n");
    }
}

long long factorial(int y) {
    long long k = 1;
    for (int i = 1; i <= y; i++) {
        k = k * i;
    }
    return k;
}

long long combination(int a, int b) {
    return factorial(a) / (factorial(b) * factorial(a - b));
}
