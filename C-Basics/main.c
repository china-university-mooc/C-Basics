#include <stdio.h>

double fact(int n);

int main() {
    int i;
    double sum = 0;
    
    for (i = 1; i <= 10; i++) {
        sum = sum + fact(i);
    }
    printf("1!+2!+...+10!=%f\n", sum);

    return 0;
}

double fact(int n) {
    double result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
