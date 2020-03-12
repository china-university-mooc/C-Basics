#include <stdio.h>
#include <math.h>

int main() {
    int num;
    int evenCount = 0;
    int oddCount = 0;
    
    scanf("%d", &num);
    while(num != -1) {
        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
        scanf("%d", &num);
    }
    
    
    printf("%d %d\n", oddCount, evenCount);
    return 0;
}
