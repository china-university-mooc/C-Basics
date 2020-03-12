#include <stdio.h>
#include <math.h>

int main() {
    int num;
    scanf("%d", &num);
    
    int digit;
    int code = 1;
    int right = 1;
    int value = 0;
    while(num > 0) {
        digit = num % 10;
        int flag = ((digit + code) % 2) == 0;
        value += right * flag;
        
        code++;
        right *= 2;
        num = num / 10;
    }
    
    
    printf("%d\n", value);
    return 0;
}
