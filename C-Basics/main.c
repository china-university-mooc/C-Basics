#include <stdio.h>

int main() {
    int fahr, lower, upper;
    double celsius;
    
    scanf("%d %d", &lower, & upper);
    if (lower > upper) {
        printf("Invalid.\n");
        return 0;
    }
    
    printf("fahr celsius\n");
    for (fahr = lower; fahr <= upper; fahr+=2) {
        celsius = (fahr - 32) * 5 / 9.0;
        printf("%d%6.1f\n", fahr, celsius);
    }

    return 0;
}
