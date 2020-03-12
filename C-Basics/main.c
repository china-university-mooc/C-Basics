#include <stdio.h>

int main() {
    int a, n;
    scanf("%d %d", &a, &n);
    
    int sum = 0;
    int item = 0;
    for (int i = 1; i <= n; i++) {
        item = item * 10 + a;
        sum += item;
    }
    printf("s = %d\n", sum);
    
    return 0;
}
