#include <stdio.h>

int main() {
    int x,y;
    scanf("%d/%d", &x, &y);
    
    int a = x;
    int b = y;
    while(b) {
        int t = a % b;
        a = b;
        b = t;
    }
    
    printf("%d/%d\n", x/a, y/a);
    
    return 0;
}
