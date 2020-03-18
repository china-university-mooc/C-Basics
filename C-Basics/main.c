#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    double bill;
    if (x < 0) {
        printf("Invalid Value!\n");
    } else if (x <= 50) {
        bill = 0.53 * x;
        printf("cost = %.2f\n", bill);
    } else {
        bill = 0.53 * x + 0.05 * (x - 50);
        printf("cost = %.2f\n", bill);
    }

    return 0;
}
