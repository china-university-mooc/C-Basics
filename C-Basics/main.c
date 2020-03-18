#include <stdio.h>

int fact(int n);

int main() {
    int n;
    scanf("%d", &n);
    
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += fact(i);
    }
    printf("%d\n", sum);

    return 0;
}

int fact(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
