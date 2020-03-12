#include <stdio.h>

int main() {
    double h;
    int n;
    scanf("%lf %d", &h, &n);
    
    double sum = -h;
    double item = h;
    if (n == 0) {
        sum = 0;
        item = 0;
    }
    for (int i = 0; i < n; i++) {
        sum += 2*item;
        item /= 2;
    }
    
    printf("%.1f %.1f\n", sum, item);
    return 0;
}
