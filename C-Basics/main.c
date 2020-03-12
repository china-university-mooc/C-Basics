#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int num, min;
    scanf("%d", &num);
    min = num;
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &num);
        if (min > num) {
            min = num;
        }
    }
    
    printf("min = %d\n", min);
    return 0;
}
