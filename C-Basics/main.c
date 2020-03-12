#include <stdio.h>
#include <math.h>

int main() {
    int num;
    scanf("%d", &num);
    
    if (num < 0) {
        num = -1 * num;
    }
    int digit;
    int sum = 0;
    int count = 0;
    do {
        digit = num % 10;
        sum += digit;
        num /= 10;
        count++;
    } while(num > 0);
    
    printf("%d %d\n", count, sum);
    return 0;
}
