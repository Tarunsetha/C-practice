// Q7 > WAF to calculate the combination one can make 
// from n items and r selected at a time. (TSRS)
#include <stdio.h>
long long factorial(int y);
long long combination(int a, int b);

int main() {
    int n, r;
    long long m;

    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    m = combination(n, r);

    printf("C(%d, %d) = %lld\n", n, r, m);

    return 0;
}

long long factorial(int y) {
    long long k = 1;
    for (int i = 1; i <= y; i++) {
        k = k * i;
    }
    return k;
}

long long combination(int a, int b) {
    if (b > a) return 0;  
    return factorial(a) / (factorial(b) * factorial(a - b));
}
