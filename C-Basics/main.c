#include <stdio.h>

double fact(int x);

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    
    double c = fact(n) / fact(m) / fact(n - m);
    printf("result = %.0f\n", c);

    return 0;
}

double fact(int x) {
    double f = 1.0;
    for (int i = 2; i <= x; i++) {
        f *= i;
    }
    return f;
}

