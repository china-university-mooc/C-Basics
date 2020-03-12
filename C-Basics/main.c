#include <stdio.h>
#include <math.h>

int main() {
    int num;
    int sum = 0;
    
    scanf("%d", &num);
    while (num > 0) {
        if (num % 2 == 1) {
            sum += num;
        }
        scanf("%d", &num);
    }
    
    printf("%d\n", sum);
    return 0;
}
