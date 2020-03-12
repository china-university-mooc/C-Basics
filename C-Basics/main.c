#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    double m = 2.0;
    double d = 1.0;
    double sum = 0;
    while(n > 0) {
        sum += m / d;
        double temp = d;
        d = m;
        m = m + temp;
        n--;
    }
    printf("%.2f\n", sum);
    
    return 0;
}
