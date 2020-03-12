#include <stdio.h>
#include <math.h>

int main() {
    
    int x = 1;
    while(!((x % 5 == 1) && (x % 6 == 5) && (x % 7 == 4) && (x % 11 == 10))) {
        x++;
    }
    printf("%d\n", x);
    
    return 0;
}
