#include <stdio.h>

int main() {
    double x, y;

    scanf("%lf", &x);
    if (x == 10) {
        y = 1 / x;
    } else {
        y = x;
    }
    printf("f(%.1f) = %.1f\n", x, y);

    return 0;
}
