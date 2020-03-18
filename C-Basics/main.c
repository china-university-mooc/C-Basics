#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    
    int limit = floor(sqrt(num));
    for (int i = 2; i <= limit; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int sum = 0;
    int count = 0;
    int i = 2;
    while (count < m) {
        if (isPrime(i)) {
            count++;
            if (count >= n) {
                sum += i;
            }
        }
        i++;
    }
    printf("%d\n", sum);
    
    return 0;
}
