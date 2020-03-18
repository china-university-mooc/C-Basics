#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    
    int min, max, mid;
    if (x >= y) {
        max = x;
        min = y;
    } else {
        max = y;
        min = x;
    }
    
    if (z > max) {
        mid = max;
        max = z;
    } else if (z < min) {
        mid = min;
        min = z;
    } else {
        mid = z;
    }
    
    printf("%d->%d->%d\n", min, mid, max);
    
    return 0;
}
