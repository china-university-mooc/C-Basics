#include <stdio.h>

int main(void) {
    int m, n, j, k;
    scanf("%d %d", &m, &n);
    
    j = m;
    while (j%n != 0) {
        j = j + m;
    }
    k = (m*n)/j;
    printf("%d %d\n", k, j);
    
    return 0;
}
