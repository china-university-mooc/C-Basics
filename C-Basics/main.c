#include <stdio.h>

int main(int argc, const char * argv[]) {
    double e, item;
    int i, j, n;
    
    printf("Input n:");
    scanf("%d", &n);
    e = 1;
    for (i = 1; i <= n; i++) {
        item = 1;
        for (j = 1; j <= i; j++) {
            item = item * j;
        }
        e = e + 1.0/item;
    }
    printf("e=%.4f\n", e);
    
    return 0;
}
