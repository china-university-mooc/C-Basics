#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int x1 = 0;
    int x2 = 1;
    int month = 1;
    while(x2 < n) {
        int temp = x1;
        x1 = x2;
        x2 = x2 + temp;
        month++;
    }
    
    printf("%d\n", month);
    return 0;
}
