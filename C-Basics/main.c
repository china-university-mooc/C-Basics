#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    
    bool flag = true;
    for (int i = 1; i <= n; i++) {
        int num = pow(2, i) - 1;
        if (isPrime(num)) {
            flag = false;
            printf("%d\n", num);
        }
    }
    if (flag) {
        printf("None\n");
    }
    
    return 0;
}
