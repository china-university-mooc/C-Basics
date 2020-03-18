#include <stdio.h>
#include <math.h>

int main() {
    int day;
    scanf("%d", &day);
    
    int mod = (day - 1)%5 + 1;
    if (mod < 4) {
        printf("Fishing in day %d\n", day);
    } else {
        printf("Drying in day %d\n", day);
    }
    
    return 0;
}
