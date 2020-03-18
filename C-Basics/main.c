#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    
    double sum = 0;
    for(int i = m; i <= n; i++) {
        sum += i * i + 1.0 / i;
    }
    printf("sum = %f\n", sum);

    return 0;
}
