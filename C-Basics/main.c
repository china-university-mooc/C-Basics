#include <stdio.h>

double mypow(double x, int n);

int main() {
    int n;
    double x;
    scanf("%lf %d", &x, &n);
    
    printf("%f\n", mypow(x, n));

    return 0;
}

double mypow(double x, int n) {
    double result = 1;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

