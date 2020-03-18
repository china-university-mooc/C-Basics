#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    double sum = 0;
    int sign = 1;
    int denominator = 1;
    for (int i = 0; i < n; i++) {
        double item = sign * 1.0 / denominator;
        sum += item;
        sign = -sign;
        denominator += 3;
    }
    printf("sum = %.3f\n", sum);

    return 0;
}
