#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    
    int max = sqrt(num);
    for (int i = 2; i <= max; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main(int argc, const char * argv[]) {
    int num;
    scanf("%d", &num);

    int p = 0;
    int q = 0;
    for (p = 2; p < num; p++) {
        if (isPrime(p)) {
            q = num - p;
            if (isPrime(q)) {
                break;
            }
        }
    }
    
    printf("%d = %d + %d\n", num, p, q);
    return 0;
}
